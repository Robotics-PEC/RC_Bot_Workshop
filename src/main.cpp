#include <Arduino.h>

int ledpin = 2;

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin,HIGH);
  delay(500);
  digitalWrite(ledpin,LOW);
  delay(500);
}

// put function definitions here: