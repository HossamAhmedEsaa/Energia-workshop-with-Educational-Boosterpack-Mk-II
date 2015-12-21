/*
  Resolution for Lab 2, 3.e) for the 
 Energia workshop with Educational Boosterpack Mk II by Luís Afonso
 
 Made in 19/12/2015 by Luís Afonso
 */

/* Define the pins of the RGB LED on the boosterpack */
#define RGB_RED_LED 39
#define RGB_GREEN_LED 38
#define RGB_BLUE_LED 37

/* Macros for buttons */
#define BUTTON1 33
#define BUTTON2 32

/* Arrays to control the LEDs sequence*/
int RGB_Red[] =  {1, 1, 0, 0 ,0, 1, 1};
int RGB_Green[] = {0, 1, 1, 1, 0, 0, 1}; 
int RGB_Blue[] =  {0, 0, 0, 1, 1, 1, 1};

/* This will be used as a counter for the sequence current index */
int Color_Counter = 0;

void setup()
{
  pinMode(RGB_RED_LED,OUTPUT);
  pinMode(RGB_GREEN_LED,OUTPUT);
  pinMode(RGB_BLUE_LED,OUTPUT);

  /* Remember to set button pins as input pull ups */
  pinMode(BUTTON1,INPUT_PULLUP);
  pinMode(BUTTON2,INPUT_PULLUP);

  //Start with all LED off
  digitalWrite(RGB_RED_LED, LOW);
  digitalWrite(RGB_GREEN_LED, LOW); 
  digitalWrite(RGB_BLUE_LED, LOW); 
}

void loop()
{
  /*
    Variables to store button states for later use through the loop
    This is really important since the button state when pressed will
  be important through the rest of the loop
  */
  int Button1State = digitalRead(BUTTON1);
  int Button2State = digitalRead(BUTTON2);
  
  /* Wait for at least 1 of the buttons to be pressed */
  while(Button1State != LOW && Button2State != LOW){
     Button1State = digitalRead(BUTTON1);
     Button2State = digitalRead(BUTTON2);    
  }
  
  /* 
    Prioritize the button1 over button2. If you press the 2 buttons
  are pressed at the same time, then it's considered only the button1
  was pressed. This is happens because a "else if" was used for checking
  button2.
  */
  if(Button1State == LOW){
    Color_Counter++; //Increment the counter
    //if it goes over the sequence max number it goes to 0
    if(Color_Counter > 6)
      Color_Counter=0;    
  }
  else if(Button2State == LOW){
    Color_Counter--; //Decrement the counter
    //if it goes bellow the sequence min number it goes to the max (6) 
    if(Color_Counter <0)
      Color_Counter = 6;
  }
    
  digitalWrite(RGB_RED_LED, RGB_Red[Color_Counter]);
  digitalWrite(RGB_GREEN_LED, RGB_Green[Color_Counter]); 
  digitalWrite(RGB_BLUE_LED, RGB_Blue[Color_Counter]);   
  delay(500); // delay for debouncing of the buttons.

}

