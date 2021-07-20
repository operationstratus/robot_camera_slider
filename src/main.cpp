#include <Arduino.h>
 
/*
  Simple Blink sketch
  simple-blink.cpp
  Use for PlatformIO demo
 
  From original Arduino Blink Sketch
  https://www.arduino.cc/en/Tutorial/Blink
  
  DroneBot Workshop 2021
  https://dronebotworkshop.com
*/
 
#define dirPin 12
#define stepPin 14
#define stepsPerRevolution 200*2
#define stepDelay 5000

// int incomingByte = 0; // for incoming serial data

void drive(){
  // Set the spinning direction clockwise:
  digitalWrite(dirPin, LOW);
  // Spin the stepper motor 1 revolution slowly:
  for (int i = 0; i < (stepsPerRevolution); i++) {
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(stepDelay);
  }
}




void setup() {
  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

  drive();

  
  Serial.begin(115200);
  while (!Serial);
  delay(200);
  Serial.println("Start!");
}
 
void loop() {
  
  // if (Serial.available() > 0) {
  //   // read the incoming byte:
  //   incomingByte = Serial.read();

  //   // say what you got:
  //   Serial.print("I received: ");
  //   Serial.println(incomingByte, DEC);
  // }
  Serial.println("Hej");
  delay(1000);
  
}