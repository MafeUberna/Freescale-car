
#include "Arduino.h"
#include "AS5600.h"

#define in1 13
#define in2 14
#define ENA 12
#define in3 6
#define in4 7
#define ENB 5

// 10% 26
// 25% 64
// 50% 128
// 60% 153
// 75% 192
// 100% 255
const int speed = 64; 

void MotorStop();
void MotorForward();
void MotorBackward();

void setup() {
  // put your setup code here, to run once:
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ENB, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  MotorForward(speed);


}

void MotorForward(int PWM){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(ENA, PWM);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(ENB, PWM);
}



