#include <Arduino.h>
const int ldrPin = 2;
const int ledPin = 5;
int lightInit;
int lightVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  lightInit = analogRead(ldrPin);
}


void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(ldrPin);
  if(lightVal - lightInit <  50)
  {
      digitalWrite (ledPin, HIGH); // licht geht an
  }
   else
  {
    digitalWrite (ledPin, LOW); // licht geht aus
  }
}