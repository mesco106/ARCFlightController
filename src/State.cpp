#include "Arduino.h"
#include "State.h"

const uint8_t counter = 1;

Printer::Printer(){    
}

void Printer::FUNCTION1(){
    Serial.println("Function 1 executing...");
    delay(500);
}

void Printer::FUNCTION2(int value){
    Serial.println("Function 2 executing...");
    delay(500);
    value++;
}

Printer State = Printer();