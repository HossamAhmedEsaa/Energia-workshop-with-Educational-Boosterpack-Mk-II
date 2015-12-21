/*
  Resolution for Lab 1, 1.b) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 19/12/2015 by Luís Afonso
*/

// most launchpads have a red LED
#define LED RED_LED

void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);     
}


void loop() {
  digitalWrite(LED, HIGH);   
  delay(500);               // changed to 500ms
  digitalWrite(LED, LOW);    
  delay(500);               // changed to 500ms
}
