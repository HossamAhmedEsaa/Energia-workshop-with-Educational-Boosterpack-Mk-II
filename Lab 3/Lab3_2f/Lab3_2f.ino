/*
  Resolution for Lab 3, 2.f) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 22/12/2015 by Luís Afonso
*/

#define RedLED 39

char a;

void setup()
{
  Serial.begin(9600);
  pinMode(RedLED,OUTPUT);
}

void loop()
{
  /* 
    Wait for something to be received
  */
   while (Serial.available() == 0);  

     a= Serial.read();
    
   if(Serial.available() > 1 || (a != '1' && a != '0') ){
      Serial.println("Please type \"1\" or \"0\" and press enter to turn On and Off the LED");
  
   }   
   else{
      digitalWrite(RedLED,a-48); 
   }
}
