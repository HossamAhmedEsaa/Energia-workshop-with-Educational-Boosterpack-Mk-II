/*
  Resolution for Lab 3, 2.e) for the 
 Energia workshop with Educational Boosterpack Mk II by Luís Afonso
 
 Made in 22/12/2015 by Luís Afonso
 */


#define RedLED 39
#define GreenLED 38
#define BlueLED 37

char Red_char, Green_char, Blue_char;

void setup()
{

  Serial.begin(9600);
  pinMode(RedLED,OUTPUT);
  pinMode(GreenLED,OUTPUT);
  pinMode(BlueLED,OUTPUT);
}

void loop()
{

  /* 
   Wait for 3 chars to be received
   */
  while (Serial.available() < 3);
  Red_char = Serial.read();
  Green_char = Serial.read();
  Blue_char = Serial.read();

  /* The char '0' = 48 integer. So to convert a 
  number to integer just subtract 48*/
  digitalWrite(RedLED,Red_char-48); 
  digitalWrite(GreenLED,Green_char-48); 
  digitalWrite(BlueLED,Blue_char-48); 

}


