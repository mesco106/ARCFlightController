#include <Arduino.h>

void setup() {
  // initialize digital pin PB1 as an output.
  Serial.begin(9600);
  pinMode(PC13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("marico el que lo lea");
  Serial.println("Blinking LED...");
  digitalWrite(PC13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(PC13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}