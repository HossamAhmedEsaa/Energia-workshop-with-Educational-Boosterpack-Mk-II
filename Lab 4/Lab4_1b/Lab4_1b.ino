/*
  Resolution for Lab 4, 1.b) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 12/02/2016 by Luís Afonso
*/

/* Macros for the joystick pins */
#define Joystick_Yaxis_Pin 26
#define Joystick_Xaxis_Pin 2

void setup()
{

  /* Initialize serial at 9600 */
  Serial.begin(9600);
}

void loop()
{
  /* Read and store the analog value at the joystick Y axis pin in Yaxis_Value */
  int Yaxis_Value = analogRead(Joystick_Yaxis_Pin);
  /* Read and store the analog value at the joystick X axis pin in Xaxis_Value */
  int Xaxis_Value = analogRead(Joystick_Xaxis_Pin);
  
  
  Serial.print("The Y axis value is: ");
  Serial.print(Yaxis_Value);
  Serial.print(" ; The X axis value is: ");
  Serial.println(Xaxis_Value);
  delay(100);


}

