/*
  Resolution for Lab 1, 1.d) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 19/12/2015 by Luís Afonso
*/

// most launchpads have a red LED
#define LED RED_LED


/* Keep from 1.c) */
const int delay_Time = 500;

/*this can be done since both ill have 
the same type (an integer) */
int LED_State_1 = 1, LED_State_2 =0;

/*
//or you can declare them like so:
 int LED_State_1 = 1;
 int LED_State_2 = 0;
*/

void setup() {                
  pinMode(LED, OUTPUT);     
}


void loop() {
  digitalWrite(LED, LED_State_1);  // Now "LED_State_1" controls the LED state here 
  delay(delay_Time);               // keep "delay_Time" as parameter
  digitalWrite(LED, LED_State_2);  // Now "LED_State_2" controls the LED state here   
  delay(delay_Time);               // keep "delay_Time" as parameter
}
