/*
  Resolution for Lab 4, 1.e) for the 
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
  
  /*
      The idea is to get the voltage in milivolts.
      In this case we use 3300*Yaxis_Value/4095 to get values bigger than 1.
      What would happen if you did straight up 3300/4095 like in 1.d) you did 3.3/4095? Well in integers
    3300/4095 = 0
  */
  int Yaxis_Voltage =  (3300*Yaxis_Value) / 4095;
  int Xaxis_Voltage =  (3300*Xaxis_Value) / 4095;
  
  Serial.print("The Y axis voltage is: ");
  Serial.print(Yaxis_Voltage);
  Serial.print("mV ; The X axis voltage is: ");
  Serial.print(Xaxis_Voltage);
  Serial.println("mV");
  delay(100);


}

