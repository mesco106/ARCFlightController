#include <Arduino.h>
#include "State.h"

#define INBUILD_PIN PC13
void setup() {
  Serial.begin(9600);
  pinMode(INBUILD_PIN, OUTPUT);
  Printer obj2;
}

void loop() {
  Printer::FUNCTION1();
  Printer::FUNCTION2(1);
  Serial.println("Blinkind LED...");
  digitalWrite(INBUILD_PIN, HIGH);
  delay(1000);
  digitalWrite(INBUILD_PIN, LOW);
  delay(1000);
}