// THIS PROJECT MADE BY github.com/waritsriyadi

#include <HTTPClient.h>
#include "thingProperties.h"
#include <ArduinoJson.h>
const char *thinkSpeakChannelId = "YOUR_CHANNEL_ID";
const char *thinkSpeakApiKey = "YOUR_API_KEY";

void readDataFromThingSpeak() {
  // Your existing code to make a GET request to ThingSpeak
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
      const size_t capacity = JSON_OBJECT_SIZE(50);
      DynamicJsonDocument doc(capacity);

      DeserializationError error = deserializeJson(doc, payload);
      if (error) {
        Serial.print("Failed to parse JSON: ");
        Serial.println(error.c_str());
        return;
      }

      // Check if the JSON contains the expected fields
      if (!doc.containsKey("field1") || !doc.containsKey("field2") || !doc.containsKey("field3")) {
        Serial.println("JSON is missing expected fields");
        return;
      }

      // Extract latitude, longitude, and speed
      latitude = doc["field1"].as<String>();
      longitude = doc["field2"].as<String>();
      speed = doc["field3"].as<float>();

      float lat = doc["field1"].as<float>();
      float lng = doc["field2"].as<float>();

      // Update CloudLocation
      location = Location(lat, lng);

      // Print latitude, longitude, and speed
      Serial.println("Latitude: " + latitude);
      Serial.println("Longitude: " + longitude);
      Serial.println("Speed: " + String(speed, 6));

      double velocity;
      velocity = (double)speed;
      if (velocity >= 0.9) {
        moving = true;
        Serial.println("Moving True");
      } else {
        moving = false;
        Serial.println("Moving False");
      }
    } else {
      Serial.println("Error accessing ThingSpeak. HTTP code: " + String(httpCode));
    }
  } else {
    Serial.println("Error connecting to ThingSpeak");
  }

  http.end();
}

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500);

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here
  readDataFromThingSpeak();
  delay(200);
}

/*
  Since Latitude is READ_WRITE variable, onLatitudeChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onLatitudeChange() {
  // Add your code here to act upon Latitude change
}
/*
  Since Longitude is READ_WRITE variable, onLongitudeChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onLongitudeChange() {
  // Add your code here to act upon Longitude change
}

void onLocationChange() {
  // Add your code here to act upon Longitude change
}

void onSpeedChange() {
}

void onMovingChange() {
}

// THIS PROJECT MADE BY github.com/waritsriyadi
