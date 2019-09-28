/*
  FlipFlop Modified with Digital Input
  Turns on an LED on for one second, then off for one second, repeatedly.
  Delay changes with 3.3v input
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// Chose pin for second LED.
int led1 = 13;
int led2 = 10;
int timeDelay = 2000;    // Delay time in ms
int inputValue = 1;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(9, INPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  inputValue = digitalRead(9);
  
  if (inputValue == 1) {
   timeDelay = 2000;
  }
 else {
  timeDelay = 500;
 }
 
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);
  delay(timeDelay);               // wait for a second
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);    // turn the LED off by making the voltage LOW
  delay(timeDelay);               // wait for a second
}
