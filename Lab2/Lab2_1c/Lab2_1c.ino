/*
  Resolution for Lab 2, 1.c) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 19/12/2015 by Luís Afonso
*/

// The boosterpack's green LED is in pin 38
// This is the only change
#define LED 38

void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);     
}


void loop() {
  digitalWrite(LED, HIGH);   
  delay(1000);              
  digitalWrite(LED, LOW);    
  delay(1000);              
}
