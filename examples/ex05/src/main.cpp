#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WebServer.h>

const char* ssid = "HI_BMFWIFI_2.4G";
const char* password = "0819110933";

ESP8266WiFiMulti wifiMulti;
ESP8266WebServer server(80);

int cnt = 0;

void setup(void){
	Serial.begin(115200);

	wifiMulti.addAP(ssid, password);

	Serial.println("Connecting ...");
	int i = 0;
	while (wifiMulti.run() != WL_CONNECTED) { 
		delay(1000);
		Serial.print(++i); Serial.print(' ');
	}
	Serial.println("");
	Serial.print("IP address: ");
	Serial.println(WiFi.localIP());

	server.onNotFound([]() {
		server.send(404, "text/plain", "Path Not Found");
	});

	server.on("/", []() {
		cnt++;
		String msg = "Hello cnt: ";
		msg += cnt;
		server.send(200, "text/plain", msg);
	});

	server.begin();
	Serial.println("HTTP server started");
}

void loop(void){
  server.handleClient();
}

