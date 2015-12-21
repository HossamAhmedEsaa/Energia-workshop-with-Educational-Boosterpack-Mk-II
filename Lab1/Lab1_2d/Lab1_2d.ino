/*
  Resolution for Lab 1, 2.d) for the 
 Energia workshop with Educational Boosterpack Mk II by Luís Afonso
 
 Edited "button" example in Energia.
 Made in 19/12/2015 by Luís Afonso
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = PUSH2;     // the number of the pushbutton pin
const int ledPin =  GREEN_LED;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int LEDState = 0;  //ADDED - create LEDState variable to control the LED.

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);    


}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  /* Wait for the button to be pressed */
  while(buttonState != LOW){
    buttonState = digitalRead(buttonPin);
  }
  
  /* This will "invert" the LEDState from 0 to 1 or 1 to 0 */
  if(LEDState == 0)
    LEDState = 1;
  else
    LEDState = 0;

  /* Use "LEDState" to control the LED state */
  digitalWrite(ledPin, LEDState); 

  /* 
   This delay is to avoid "bouncing"
   The button keeps "micro-bouncing" after you let it go
  these bounces are very short and can be enough to be seen as a press, it
  actually oscilates between "pressed" and "not pressed" multiple times.
    The MCU is so fast that it can pick up the really fast and short bounces.
    So the delay purpose is to wait for the button to stabilize before making another
  reading. This is the simplest "debouncing" technique and it blocks the code execution (bad) 
  */
  delay(500);
}

