/*
  Resolution for Lab 2, 2.d) for the 
 Energia workshop with Educational Boosterpack Mk II by Luís Afonso
 
 Edited "button" example in Energia.
 Made in 19/12/2015 by Luís Afonso
 */


const int Button1 = 33;     // Button 1 on the boosterpack
const int RedLED =  39;      // the number of Red LED on the boosterpack

const int Button2 = 32;     // Button 2 on the boosterpack
const int GreenLED =  38;      // the number of Green LED on the boosterpack

const int JButton = 5;     // joystick Button on the boosterpack
const int BlueLED =  37;      // the number of Blue LED on the boosterpack

int Button1State = 0;         // variable for reading the pushbutton status
int Button2State = 0;    
int JButtonState = 0;

void setup() {

  pinMode(RedLED, OUTPUT);      
  pinMode(GreenLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
  
  pinMode(Button1, INPUT_PULLUP);   
  pinMode(Button2, INPUT_PULLUP);
  pinMode(JButton, INPUT_PULLUP);    
}

void loop(){
  Button1State = digitalRead(Button1);
  Button2State = digitalRead(Button2);
  JButtonState = digitalRead(JButton);
  
  if (Button1State == LOW)    
    digitalWrite(RedLED, HIGH);  
  else
    digitalWrite(RedLED, LOW); 

  if (Button2State == LOW)       
    digitalWrite(GreenLED, HIGH);  
  else
    digitalWrite(GreenLED, LOW); 
    
  if (JButtonState == LOW)       
    digitalWrite(BlueLED, HIGH);  
  else
    digitalWrite(BlueLED, LOW); 
}

