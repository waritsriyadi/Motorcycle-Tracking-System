#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

const char *ssid = "YOUR_WIFI_SSID";
const char *password = "YOUR_WIFI_PASSWORD";
const char *thinkSpeakChannelId = "YOUR_CHANNELID";
const char *thinkSpeakApiKey = "YOUR_TS_API_KEY";
const char *telegramBotToken = "YOUR_TELEGRAM_BOT_TOKEN";    // Example: 1243465387:AAdHAHq_yOyB2xSQn5_Eq_n9u1PBsSkDQo
const char *telegramChatId = "YOUR_CHAT_ID";
int botRequestDelay = 100;
unsigned long lastTimeBotRan;
float currentLat = 0.0;
float currentLng = 0.0;

void readDataFromThingSpeak() {
  // Make a GET request to ThingSpeak
  HTTPClient http;
  String url = "http://api.thingspeak.com/channels/" + String(thinkSpeakChannelId) + "/feeds/last.json?api_key=" + String(thinkSpeakApiKey);
  http.begin(url);

  int httpCode = http.GET();
  if (httpCode > 0) {
    if (httpCode == HTTP_CODE_OK) {
      String payload = http.getString();
      Serial.println("Received data from ThingSpeak:");
      Serial.println(payload);

      // Parse JSON
      const size_t capacity = JSON_OBJECT_SIZE(10);
      DynamicJsonDocument doc(capacity);

      DeserializationError error = deserializeJson(doc, payload);
      if (error) {
        Serial.println("Failed to parse JSON");
        return;
      }

      // Extract latitude and longitude
      currentLat = doc["field1"].as<float>();
      currentLng = doc["field2"].as<float>();
    } else {
      Serial.println("Error accessing ThingSpeak. HTTP code: " + String(httpCode));
    }
  } else {
    Serial.println("Error connecting to ThingSpeak");
  }

  http.end();
}

void sendTelegramMessage(const String &message) {
  // Send message to Telegram
  HTTPClient http;
  String url = "https://api.telegram.org/bot" + String(telegramBotToken) + "/sendMessage";
  String payload = "chat_id=" + String(telegramChatId) + "&text=" + message;

  http.begin(url);
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");

  int httpCode = http.POST(payload);
  if (httpCode > 0) {
    if (httpCode == HTTP_CODE_OK) {
      String response = http.getString();
      Serial.println("Telegram API Response:");
      Serial.println(response);
    } else {
      Serial.println("Error sending message to Telegram. HTTP code: " + String(httpCode));
    }
  } else {
    Serial.println("Error connecting to Telegram API");
  }

  http.end();
}

void handleNewMessages(const String &text) {
  if (text == "/start") {
    String welcomeMessage = "Selamat Datang!\nGunakan perintah berikut:\n";
    welcomeMessage += "1. /latitude - Menampilkan latitude\n";
    welcomeMessage += "2. /longitude - Menampilkan longitude\n";
    welcomeMessage += "3. /lokasi - Menampilkan lokasi lengkap\n";
    sendTelegramMessage(welcomeMessage);
  } else if (text == "/latitude") {
    sendTelegramMessage("latitude: " + String(currentLat, 6));
  } else if (text == "/longitude") {
    sendTelegramMessage("longitude: " + String(currentLng, 6));
  } else if (text == "/lokasi") {
    String locationMessage = "Lokasi : https://www.google.com/maps/@" + String(currentLat, 6) + "," + String(currentLng, 6) + ",21z?entry=ttu";
    sendTelegramMessage(locationMessage);
  } else {
    // Handle unrecognized commands or other text
    sendTelegramMessage("Perintah tidak dikenali");
  }
}

void setup() {
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Read data from ThingSpeak
  readDataFromThingSpeak();
}

void loop() {
  HTTPClient http;
  String url = "https://api.telegram.org/bot" + String(telegramBotToken) + "/getUpdates?offset=0";
  http.begin(url);

  int httpCode = http.GET();
  if (httpCode > 0) {
    if (httpCode == HTTP_CODE_OK) {
      String payload = http.getString();
      Serial.println("Received Telegram updates:");
      Serial.println(payload);

      // Parse JSON
      const size_t capacity = JSON_ARRAY_SIZE(1) + JSON_OBJECT_SIZE(10) + 30;
      DynamicJsonDocument doc(capacity);

      DeserializationError error = deserializeJson(doc, payload);
      if (error) {
        Serial.println("Failed to parse JSON");
        Serial.println(error.c_str());  // Print the specific parsing error
        Serial.println(payload);  // Print the received payload for debugging
        return;
      }

      // Check if there are new messages
      JsonArray results = doc["result"].as<JsonArray>();
      for (JsonObject result : results) {
        String text = result["message"]["text"];
        handleNewMessages(text);
      }
    } else {
      Serial.println("Error getting Telegram updates. HTTP code: " + String(httpCode));
    }
  } else {
    Serial.println("Error connecting to Telegram API");
  }

  http.end();

  // Wait for a short duration before checking for updates again
  delay(botRequestDelay);
}
