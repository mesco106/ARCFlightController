#include <Arduino.h>
#include "State.h"

#define INBUILD_PIN PC13
void setup() {
  Serial.begin(9600);
  pinMode(INBUILD_PIN, OUTPUT);
}

void loop() {
  State.FUNCTION1();
  State.FUNCTION2(1);
  Serial.println("Blinkind LED...");
  digitalWrite(INBUILD_PIN, HIGH);
  delay(1000);
  digitalWrite(INBUILD_PIN, LOW);
  delay(1000);
}