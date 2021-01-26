#include <Arduino.h>

int cnt = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  cnt++;
  Serial.print(cnt);
}

