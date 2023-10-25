#include <AccelStepper.h>

const int stepPin = 5;
const int dirPin = 2;
const int enPin = 8;
const int buttonPin = 7;

AccelStepper stepper(1, stepPin, dirPin);

int buttonState = HIGH;
int lastButtonState = HIGH;
bool moveClockwise = true;

void setup() {
  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, LOW);
  
  pinMode(buttonPin, INPUT_PULLUP);
  
  stepper.setMaxSpeed(40000);
  stepper.setAcceleration(80000);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && lastButtonState == HIGH) {
    if (moveClockwise) {
      stepper.move(-23000);
    } else {
      stepper.move(23000);
    }
    stepper.runToPosition();
    moveClockwise = !moveClockwise;  // Toggle the direction flag
  }

  lastButtonState = buttonState;
  
  delay(100);  // Small delay for button debouncing
}
