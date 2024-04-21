#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  #define UP 1
  #define DOWN 2
  #define LEFT 3
  #define RIGHT 4
  #define UP_LEFT 5
  #define UP_RIGHT 6
  #define DOWN_LEFT 7
  #define DOWN_RIGHT 8
  #define TURN_LEFT 9
  #define TURN_RIGHT 10
  #define STOP 0

  #define FRONT_RIGHT_MOTOR 0
  #define BACK_RIGHT_MOTOR 1
  #define FRONT_LEFT_MOTOR 2
  #define BACK_LEFT_MOTOR 3


  #define FORWARD 1
  #define BACKWARD -1


  pinMode(GPIO_NUM_23, OUTPUT);
  pinMode(GPIO_NUM_22, OUTPUT);


  pinMode(GPIO_NUM_21, OUTPUT);
  pinMode(GPIO_NUM_19, OUTPUT);

  pinMode(GPIO_NUM_18, OUTPUT);
  pinMode(GPIO_NUM_5, OUTPUT);

  pinMode(GPIO_NUM_2, OUTPUT);
  pinMode(GPIO_NUM_15, OUTPUT);


  struct MOTOR_PINS
  {
    int pinIN1;
    int pinIN2;
  };



  Serial.begin(921600);
}
void MotorDirection() {
  if(FORWARD==true)
  {
    digitalWrite(GPIO_NUM_23, HIGH);
    digitalWrite(GPIO_NUM_22, LOW);
    digitalWrite(GPIO_NUM_21, HIGH);
    digitalWrite(GPIO_NUM_19, LOW);
  }
  else if (BACKWARD==true)
  {
    digitalWrite(GPIO_NUM_23, HIGH);
    digitalWrite(GPIO_NUM_22, LOW);
    digitalWrite(GPIO_NUM_21, HIGH);
    digitalWrite(GPIO_NUM_19, LOW);
  }
  else
  {
    digitalWrite(GPIO_NUM_23, LOW);
    digitalWrite(GPIO_NUM_22, LOW);
    digitalWrite(GPIO_NUM_21, LOW);
    digitalWrite(GPIO_NUM_19, LOW);
  }
  
  
}

void loop() {
  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}