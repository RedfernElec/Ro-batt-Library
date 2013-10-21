/*
Robatt.cpp
Library provides simple functions to control motors.
Created by Joseph Birks, 21 Oct 2013.
This code is public domain.
*/

#include "Arduino.h"
#include "Robatt.h"

RobattMotor::RobattMotor(char num)
{
  if(num==1)
  {
    a = MOTOR1A_PIN;
    b = MOTOR1B_PIN;
  }
  else
  {
    a = MOTOR2A_PIN;
    b = MOTOR2B_PIN;
  }
  pinMode(a, OUTPUT);      
  pinMode(b, OUTPUT);

  halt();
}

void RobattMotor::forward()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
}

void RobattMotor::off()
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
}

void RobattMotor::halt()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
}

void RobattMotor::reverse()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
}

void RobattMotor::forward(unsigned char duty)
{
  analogWrite(a, duty);
  digitalWrite(b, LOW);  
}

void RobattMotor::reverse(unsigned char duty)
{
  digitalWrite(a, LOW); 
  analogWrite(b, duty);
}