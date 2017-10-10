int buttonState = 0;         // variable for reading the pushbutton status
int buttonPin = 6;
int brightness = 0;    // how bright the LED is
int fadeAmount = 2;    // how many points to fade the LED by

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  analogWrite(9, brightness);

 // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
      // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;
  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 20 milliseconds to see the dimming effect
    delay(20);
    digitalWrite(8, HIGH);
  } else {
    // turn LED off:
    digitalWrite(9,LOW);
    digitalWrite(8, LOW);
  }

  
}

  
 
 
