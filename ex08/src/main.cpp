#include <Arduino.h>

void setup()
{
	Serial.begin(115200);
	Serial.println("\n\n\n");
}

void loop()
{
	int val = analogRead(2);
	Serial.printf("======= read %d\n", val);
	delay(100);
}

