/*
This example shows how to use the standard Servo library with the Ro-batt Shield.
By including the Robatt library, constants (e.g. SERVO1_PIN) can be used to attach
the Servo objects to the correct pins.
Created by Joseph Birks, 21 Oct 2013.
This code is public domain.
*/

#include <Robatt.h>

RobattMotor motor_one(1);    // Create RobattMotor objects for each motor
RobattMotor motor_two(2);    // motor_one is connect to 1A and 1B and motor_two is connected
                             // to 2A and 2B

void setup() 
{ 
} 

void loop() 
{ 
  motor_one.forward();      // Run both motors forwards
  motor_two.forward();
  delay(1000);              // 1 second delay
  motor_one.halt();         // Stop motors (applies braking)
  motor_two.halt();
  delay(1000);              // 1 second delay
  motor_one.reverse();      // Run motor_one in reverse
  delay(1000);              // 1 seocnd delay
  motor_one.off();          // Turn of motor_one (no braking: slow decay)
  delay(1000);              // 1 seocnd delay
  motor_one.forward(128);   // Run both motors forward at half speed
  motor_two.forward(128);   // (full speed: 255, stoped: 0)
  delay(1000);              // 1 second delay
} 
