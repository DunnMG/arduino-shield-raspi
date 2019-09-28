/*
  FlipFlop
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// Chose pin for second LED.
int led1 = 13;
int led2 = 8;
int timeDelay = 2000;    // Delay time in ms

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);
  delay(timeDelay);               // wait for a second
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);    // turn the LED off by making the voltage LOW
  delay(timeDelay);               // wait for a second
}
