/*
  Resolution for Lab 1, 2.c) for the 
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

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  /*
    Use the value of "buttonState" as parameter.
    Since a pressed button = LOW and we want the LED on whent that happens
  a not is used ( the !) which means: !LOW = HIGH and !HIGH=LOW.
  */
  digitalWrite(ledPin, !buttonState); 

}
