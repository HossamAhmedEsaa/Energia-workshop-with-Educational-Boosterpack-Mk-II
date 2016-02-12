/*
  Resolution for Lab 3, 2.d) for the 
 Energia workshop with Educational Boosterpack Mk II by Luís Afonso
 
 Made in 22/12/2015 by Luís Afonso
 */


#define LED 39

//Varible that controls the delay. Default value 1000.
int Time1=1000;  
int Time2=1000;  //addition from 2.c)

void setup() {                
  pinMode(LED, OUTPUT);     

  Serial.begin(9600);
}


void loop() {  
  /*
       If there are chars in the buffer the first integer will be store in "Time"
   Note that if there is no number in the string received, the value returned
   will be 0
   This time you should always send the 2 numbers in the same string
   Ex: "1000 50" or "1000 abcd 50"
   If you don't send 2 numbers then time2 will be 0.
   */

  while( Serial.available() > 0){
    /*
     Store values of Time1 and Time2 in case they
     are set to 0.
     */
    int Time1_temp = Time1; 
    int  Time2_temp = Time2;  
    Time1 = Serial.parseInt();
    Time2 = Serial.parseInt(); 

    //If Time1 is 0 then return to previous value
    if(Time1 == 0)
      Time1=Time1_temp;
    //If Time2 is 0 then return to previous value
    if(Time2 == 0)
      Time2 = Time2_temp;
  }

  digitalWrite(LED, HIGH); 
  delay(Time1);               
  digitalWrite(LED, LOW);    
  delay(Time2); //change from 2.c)            
}




