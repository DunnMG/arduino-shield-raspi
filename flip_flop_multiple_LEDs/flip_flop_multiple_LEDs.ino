/*
  Make a flip-flop, which is an alternating pair of 
  LEDs or lights where one is on when the other is off
 */
 
// Make an array of pins connected to leds
int leds[] = {9, 10, 11};
int ledCount = 3;
int time_delay = 1000;   // set time delay (mS) duration here

// the setup routine runs once when you press reset:
void setup() {                
  // loop initialize the digital pin as an output.
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(leds[thisLed], OUTPUT);
}
}

// the loop routine runs over and over again forever:
void loop() {
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(leds[i], HIGH);
    delay(time_delay);
    digitalWrite(leds[i], LOW);
  }
  //now reverse
  for (int i = ledCount-2; i > 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(time_delay);
    digitalWrite(leds[i], LOW);
  }
}
