// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "YOUR_DEVICE_SECRET_CODE";

const char SSID[]               = "YOUR_WIFI_SSID";    // Network SSID (name)
const char PASS[]               = "YOUR_WIFI_PASSWORD";    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]         = "YOUR_SECRET_KEY_ARDUINO_IOT";    // Secret device password

void onLatitudeChange();
void onLongitudeChange();
void onLocationChange();
void onMovingChange();
void onSpeedChange();

String latitude;
String longitude;
CloudLocation location;
CloudVelocity speed;
bool moving;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(latitude, READWRITE, ON_CHANGE, onLatitudeChange);
  ArduinoCloud.addProperty(longitude, READWRITE, ON_CHANGE, onLongitudeChange);
  ArduinoCloud.addProperty(location, READWRITE, ON_CHANGE, onLocationChange);
  ArduinoCloud.addProperty(moving, READWRITE, ON_CHANGE, onMovingChange);
  ArduinoCloud.addProperty(speed, READWRITE, ON_CHANGE, onSpeedChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
