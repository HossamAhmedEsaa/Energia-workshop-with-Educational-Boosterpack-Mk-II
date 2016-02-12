/*
  Resolution for Lab 3, 2.a) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 21/12/2015 by Luís Afonso
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
  
   
   /* If the char received is the char "1" (ASCII number 49) */
   if(a == '1')
      digitalWrite(RedLED,1); 
   else if(a == '0')
    digitalWrite(RedLED,0); 
}
