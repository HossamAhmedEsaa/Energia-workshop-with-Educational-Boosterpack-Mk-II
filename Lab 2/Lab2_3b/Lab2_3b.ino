/*
  Resolution for Lab 2, 3.b) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 19/12/2015 by Luís Afonso
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
}

/*
  The code bellow creates a sequence of the combination of all colors
Usually this is done by (RGB): 100 -> 110 -> 010 -> 011 -> 001 -> 101 -> 111
and then back to 100 (Red).
  In the loop bellow some commands are commented out since they are 
  not necessary and it's to show it's possible to optimize the code
(code has less lines). Off course it's much easier to produce the 
code before the optimizations.
*/
void loop()
{
  
  
  
  /* Red only */
  digitalWrite(RGB_RED_LED, HIGH);
  digitalWrite(RGB_GREEN_LED, LOW);  
  digitalWrite(RGB_BLUE_LED, LOW); 
  
  delay(500);
  
  /* Red + Green = Yellow */
  //digitalWrite(RGB_RED_LED, HIGH); //already ON in previous
  digitalWrite(RGB_GREEN_LED, HIGH); 
  //digitalWrite(RGB_BLUE_LED, LOW); //already OFF in previous
  
  delay(500);
  
  /* Green only */
  digitalWrite(RGB_RED_LED, LOW); 
  //digitalWrite(RGB_GREEN_LED, HIGH); //already ON in previous
  //digitalWrite(RGB_BLUE_LED, LOW); //already OFF in previous
  
  delay(500);
  
  /* Green + Blue = Turquoise  */
  //digitalWrite(RGB_RED_LED, LOW); //already OFF in previous
  //digitalWrite(RGB_GREEN_LED, HIGH); //already ON in previous
  digitalWrite(RGB_BLUE_LED, HIGH);   
  
  delay(500);
  
  /* Blue only  */
  //digitalWrite(RGB_RED_LED, LOW); //already OFF in previous
  digitalWrite(RGB_GREEN_LED, LOW); 
  //digitalWrite(RGB_BLUE_LED, HIGH); //already ON in previous
  
  delay(500);
  
  /* Red + Blue = Magenta/Purple  */
  digitalWrite(RGB_RED_LED, HIGH); 
  //digitalWrite(RGB_GREEN_LED, LOW); //already OFF in previous
  //digitalWrite(RGB_BLUE_LED, HIGH); //already ON in previous
  
  delay(500);
  
  /* Red + Green + Blue = White */
  //digitalWrite(RGB_RED_LED, HIGH); //already ON in previous
  digitalWrite(RGB_GREEN_LED, HIGH); 
  //digitalWrite(RGB_BLUE_LED, HIGH); //already ON in previous
  
  delay(500);  
}
