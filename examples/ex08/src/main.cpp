#include <ESP8266WiFi.h>
#include <PubSubClient.h>

const char* ssid = "CHOOMPOL_WIFI";
const char* password = "choompol";
const char* mqtt_server = "192.168.1.100";

WiFiClient espClient;
PubSubClient client(espClient);
unsigned long lastMsg = 0;
#define MSG_BUFFER_SIZE	(50)
char msg[MSG_BUFFER_SIZE];
int value = 0;

void setup_wifi() {
  delay(10);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  randomSeed(micros());
  Serial.println("");
  Serial.println("WiFi connected");
}

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    String clientId = "ESP8266Client-";
    //clientId += String(random(0xffff), HEX);

	if (client.connect(clientId.c_str(), "choompol", "choompol")) {
    //if (client.connect(clientId.c_str())) {
      Serial.println("connected");
      client.publish("outTopic", "hello world");
      client.subscribe("inTopic");
    } else {
      Serial.println(" try again in 5 seconds");
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
}

void loop() {

	  if (!client.connected()) {
	    reconnect();
	  }
	  client.loop();

	unsigned long now = millis();
	if (now - lastMsg > 2000) {
		lastMsg = now;
		++value;
		snprintf (msg, MSG_BUFFER_SIZE, "hello world #%d", value);
		Serial.println(msg);
		client.publish("outTopic", msg);
	}
	delay(5000);
}

