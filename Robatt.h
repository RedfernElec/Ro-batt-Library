/*
Robatt.h
Library provides simple functions to control motors.
Created by Joseph Birks, 21 Oct 2013.
This code is public domain.
*/

#include "Arduino.h"

#ifndef ROBATT_H
#define ROBATT_H

#define MOTOR1A_PIN 6
#define MOTOR1B_PIN 5
#define MOTOR2A_PIN 11
#define MOTOR2B_PIN 3

#define SERVO1_PIN 9
#define SERVO2_PIN 10
#define SERVO3_PIN 12

class RobattMotor
{
  public:
    RobattMotor(char num);
    void forward();
    void off();
    void halt();
    void reverse();
    void forward(unsigned char duty);
    void reverse(unsigned char duty);
  private:
    char a, b;
};

#endif