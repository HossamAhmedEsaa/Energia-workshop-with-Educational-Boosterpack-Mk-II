/*
  Resolution for Lab 2, 2.b) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Edited "button" example in Energia.
  Made in 19/12/2015 by Luís Afonso
*/

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 33;     // Button 1 on the boosterpack
const int ledPin =  39;      // the number of Red LED on the boosterpack

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
  
  if (buttonState == LOW)    
    digitalWrite(ledPin, HIGH);  
  else
    digitalWrite(ledPin, LOW); 

}
