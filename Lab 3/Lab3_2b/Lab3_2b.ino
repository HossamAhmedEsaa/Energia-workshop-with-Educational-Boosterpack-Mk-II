/*
  Resolution for Lab 3, 2.b) for the 
 Energia workshop with Educational Boosterpack Mk II by Luís Afonso
 
 Made in 22/12/2015 by Luís Afonso
 */


#define RedLED 39
#define GreenLED 38
#define BlueLED 37

//Variables that receive the characters
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
   If you send 1 at a time, this will wait until the 3rd is sent
   */
  while (Serial.available() < 3);
  Red_char = Serial.read();
  Green_char = Serial.read();
  Blue_char = Serial.read();

  if(Red_char == '1')
    digitalWrite(RedLED,1); 
  else if(Red_char == '0')
    digitalWrite(RedLED,0); 

  if(Green_char == '1')
    digitalWrite(GreenLED,1); 
  else if(Green_char == '0')
    digitalWrite(GreenLED,0); 

  if(Blue_char == '1')
    digitalWrite(BlueLED,1); 
  else if(Blue_char == '0')
    digitalWrite(BlueLED,0); 
}

