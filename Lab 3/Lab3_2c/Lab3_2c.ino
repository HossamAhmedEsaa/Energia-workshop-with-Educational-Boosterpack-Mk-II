/*
  Resolution for Lab 3, 2.c) for the 
 Energia workshop with Educational Boosterpack Mk II by Luís Afonso
 
 Made in 22/12/2015 by Luís Afonso
 */


#define LED 39

//Varible that controls the delay. Default value 1000.
int Time=1000;  

void setup() {                

  pinMode(LED, OUTPUT);     
  
  Serial.begin(9600);


}


void loop() {
  
   /*
       If there are chars in the buffer the first integer will be store in "Time"
       Note that if there is no number in the string received, the value returned
     will e 0
     */
    while( Serial.available() > 0){
       Time = Serial.parseInt();
    }

  
  digitalWrite(LED, HIGH); 
  delay(Time);               
  digitalWrite(LED, LOW);    
  delay(Time);             
}
