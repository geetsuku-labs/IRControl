#include <Arduino.h>

void setup() {
  pinMode(23, OUTPUT_OPEN_DRAIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(23, HIGH);
  delay(500);
  digitalWrite(23, LOW);
  delay(500);
}