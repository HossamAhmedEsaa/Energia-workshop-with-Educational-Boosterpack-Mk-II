/*

  Resolution for Lab 4, 2.a) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 13/12/2015 by Luís Afonso
*/

// The LED used is the Red LED on the educational boosterpack
#define LED 39

void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT); 

}

void loop() {
  for(int i=0; i <= 2000; i+=100){
    digitalWrite(LED, HIGH); // Turn on the LED
    delay(i); //Time on              
    digitalWrite(LED, LOW); // Turn off the LED
    delay(2000 - i);  //Time off         
  }
}


