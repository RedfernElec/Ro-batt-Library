/*
This example shows how to use the standard Servo library with the Ro-batt Shield.
By including the Robatt library, constants (e.g. SERVO1_PIN) can be used to attach
the Servo objects to the correct pins.
Created by Joseph Birks, 21 Oct 2013.
This code is public domain.
*/

#include <Robatt.h>
#include <Servo.h>

Servo servo1;  // Create three servo objects
Servo servo2;
Servo servo3;

void setup()
{
  servo1.attach(SERVO1_PIN);  // Attach each servo object to the approprate pin
  servo2.attach(SERVO2_PIN);  // by using constants from the Robatt library
  servo3.attach(SERVO3_PIN);
}

void loop()
{
  //Move each servo in turn, seperated by a 0.5 sec delay
  delay(500);
  servo1.write(150);
  delay(500);
  servo2.write(150);
  delay(500);
  servo3.write(150);
  delay(500);
  servo1.write(30);
  delay(500);
  servo2.write(30);
  delay(500);
  servo3.write(30);
}

