#include <Stepper.h>
//Look at docs https://docs.arduino.cc/libraries/stepper/
// Change the Steps numbs they arent tested yet
int StepsPerRotation = 400;
int StepsPerCargo = 50;
int StepSpeed = 15;
int StepPin1 = 8;
int StepPin2 = 9;
int StepPin3 = 10;
int StepPin4 = 11;
int ButtonPin1 = 5;
int ButtonPin2 = 6;
int ButtonPin3 = 7;

Stepper myStepper = Stepper(100, StepPin1, StepPin2, StepPin3, StepPin4); 


void setup() {
  // put your setup code here, to run once  :
  pinMode(ButtonPin1, INPUT_PULLUP);
  pinMode(ButtonPin2, INPUT_PULLUP);
  pinMode(ButtonPin3, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(ButtonPin1) == LOW{
    myStepper.setSpeed(StepSpeed);
    myStepper.step(StepsPerCargo);
  }

  if (digitalRead(ButtonPin3) == LOW {
    myStepper.setSpeed(StepSpeed);
    myStepper.step(StepsPerCargo);
  }

  if (digitalRead(ButtonPin2) == LOW {
    myStepper.setSpeed(StepSpeed);
    myStepper.step(StepsPerRotation);
  }

  

}
