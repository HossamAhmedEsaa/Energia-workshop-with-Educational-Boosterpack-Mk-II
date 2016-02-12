/*
  Resolution for Lab 3, 1.b) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 21/12/2015 by Luís Afonso
*/

//Using the boosterpack's Red LED
#define LED 39

  

void setup() {                
  pinMode(LED, OUTPUT); 

  //Remember to begin the Serial  
  Serial.begin(9600);
}


void loop() {
  digitalWrite(LED, HIGH);   
  Serial.println("LED On"); //When you turn on the LED print "LED On"
  delay(1000);    
  
  digitalWrite(LED, LOW);    
  Serial.println("LED Off"); //When you turn off the LED print "LED Off"
  delay(1000);               
}
