/*
  Resolution for Lab 4, 2.a) for the 
 Energia workshop with Educational Boosterpack Mk II by Luís Afonso
 
 Made in 12/02/2016 by Luís Afonso
 */

/* Macros for the accelerometer pins */
#define Acc_Xaxis_Pin 23
#define Acc_Yaxis_Pin 24
#define Acc_Zaxis_Pin 25

void setup()
{

  /* Initialize serial at 9600 */
  Serial.begin(9600);
}

void loop()
{
  /* Read and store the analog value at the joystick X axis pin in Xaxis_Value */
  int Xaxis_Value = analogRead(Acc_Xaxis_Pin);
  /* Read and store the analog value at the joystick Y axis pin in Yaxis_Value */
  int Yaxis_Value = analogRead(Acc_Yaxis_Pin);
  /* Read and store the analog value at the joystick Y axis pin in Yaxis_Value */
  int Zaxis_Value = analogRead(Acc_Zaxis_Pin);

  Serial.print("X: ");
  Serial.print(Xaxis_Value);
  Serial.print(" ; Y: ");
  Serial.print(Yaxis_Value);
  Serial.print(" ; Z: ");
  Serial.println(Zaxis_Value);
  delay(100);
}


