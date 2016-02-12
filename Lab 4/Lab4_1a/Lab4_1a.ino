/*
  Resolution for Lab 4, 1.a) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 12/02/2016 by Luís Afonso
*/

/* 
    Macro for the pin reading the joystick y axis value
    In Energia you can use the pin number just fine and this will make this
  code work in any launchpad since all follow a boosterpack standard.
*/
#define Joystick_Yaxis_Pin 26

void setup()
{

  /* Initialize serial at 9600 */
  Serial.begin(9600);
}

void loop()
{
  /* Read and store the analog value at the joystick Y axis pin in Yaxis_Value */
  int Yaxis_Value = analogRead(Joystick_Yaxis_Pin);

  Serial.print("The Y axis value is: ");
  Serial.println(Yaxis_Value);

  delay(100);


}



