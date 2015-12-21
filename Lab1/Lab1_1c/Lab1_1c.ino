/*

  Resolution for Lab 1, 1.c) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 19/12/2015 by Luís Afonso
*/

// most launchpads have a red LED
#define LED RED_LED


// Create constant integer variable "delay_Time" with the value of 500ms
const int delay_Time = 500;

void setup() {                
  pinMode(LED, OUTPUT);     
}


void loop() {
  digitalWrite(LED, HIGH);   
  delay(delay_Time);               // use "delay_Time" as parameter
  digitalWrite(LED, LOW);    
  delay(delay_Time);              // use "delay_Time" as parameter
}
