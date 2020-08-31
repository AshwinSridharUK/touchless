#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>


const char THING_ID[] = "94cc8251-2304-478c-9822-20fee9389cc8";

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)

void onWashingChange();

float washing;

void initProperties(){

  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(washing, READWRITE, ON_CHANGE, onWashingChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
