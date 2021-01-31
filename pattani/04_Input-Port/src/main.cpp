#include <Arduino.h>
#include <ESP8266WiFi.h>

int cnt = 0;

void setup()
{
	Serial.begin(115200);
	pinMode(0, OUTPUT);
	pinMode(2, OUTPUT);
	Serial.println("\n\n\n");
}

void loop()
{
	cnt++;
	if(cnt % 2) {
		Serial.println("========== ON 0,2 ===========");
		digitalWrite(0, HIGH);
		digitalWrite(2, HIGH);
	} else {
		Serial.println("========== OFF 0,2 ===========");
		digitalWrite(0, LOW);
		digitalWrite(2, LOW);
	}
	delay(500);
}

