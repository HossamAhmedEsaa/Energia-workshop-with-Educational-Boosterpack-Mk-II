/*
  Resolution for Lab 2, 3.d) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 19/12/2015 by Luís Afonso
*/

/* Define the pins of the RGB LED on the boosterpack */
#define RGB_RED_LED 39
#define RGB_GREEN_LED 38
#define RGB_BLUE_LED 37

/* Arrays to control the LEDs sequence*/
int RGB_Red[7] =  {1, 1, 0, 0 ,0, 1, 1};
/*As you can see, you can omit the size of the array 
when you give it a set number of elements */
int RGB_Green[] = {0, 1, 1, 1, 0, 0, 1}; 
int RGB_Blue[] =   {0, 0, 0, 1, 1, 1, 1};


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

void loop()
{
  
  for(int i=0; i < 7; i++){
    digitalWrite(RGB_RED_LED, RGB_Red[i]);
    digitalWrite(RGB_GREEN_LED, RGB_Green[i]); 
    digitalWrite(RGB_BLUE_LED, RGB_Blue[i]);   
  
    delay(500);     
  }
  
}
