/*
  Resolution for Lab 3, 1.c) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 21/12/2015 by Luís Afonso
*/

/* Define the pins of the RGB LED on the boosterpack */
#define RGB_RED_LED 39
#define RGB_GREEN_LED 38
#define RGB_BLUE_LED 37

void setup()
{  
  pinMode(RGB_RED_LED,OUTPUT);
  pinMode(RGB_GREEN_LED,OUTPUT);
  pinMode(RGB_BLUE_LED,OUTPUT);
    
  //Start with all LED off
  digitalWrite(RGB_RED_LED, LOW);
  digitalWrite(RGB_GREEN_LED, LOW); 
  digitalWrite(RGB_BLUE_LED, LOW); 
  
  //Remember to begin the serial
  Serial.begin(9600); //Addition from lab 3 1.c)
}

void loop()
{ 
  /* Red only */
  digitalWrite(RGB_RED_LED, HIGH);
  digitalWrite(RGB_GREEN_LED, LOW);  
  digitalWrite(RGB_BLUE_LED, LOW); 
  Serial.println("Red"); //Addition from lab 3 1.c)
  delay(500);
  
  /* Red + Green = Yellow */
  digitalWrite(RGB_GREEN_LED, HIGH); 
  Serial.println("Yellow"); //Addition from lab 3 1.c)
  delay(500);
  
  /* Green only */
  digitalWrite(RGB_RED_LED, LOW); 
  Serial.println("Green"); //Addition from lab 3 1.c)
  delay(500);
  
  /* Green + Blue = Turquoise  */
  digitalWrite(RGB_BLUE_LED, HIGH);   
  Serial.println("Turquoise"); //Addition from lab 3 1.c)
  delay(500);
  
  /* Blue only  */
  digitalWrite(RGB_GREEN_LED, LOW); 
  Serial.println("Blue"); //Addition from lab 3 1.c)
  delay(500);
  
  /* Red + Blue = Magenta/Purple  */
  digitalWrite(RGB_RED_LED, HIGH);   
  Serial.println("Magenta"); //Addition from lab 3 1.c)
  delay(500);
  
  /* Red + Green + Blue = White */
  digitalWrite(RGB_GREEN_LED, HIGH); 
  Serial.println("White"); //Addition from lab 3 1.c)
  delay(500);  
}
