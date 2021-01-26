#include <Arduino.h>

int cnt = 0;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(0, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  cnt++;
  Serial.print(cnt);
  Serial.print("\n");
  digitalWrite(0, HIGH);
  digitalWrite(2, LOW);
  delay(200);
  digitalWrite(0, LOW);
  digitalWrite(2, HIGH);
  delay(200);
}

