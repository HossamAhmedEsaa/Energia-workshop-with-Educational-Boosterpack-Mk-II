/*
  Resolution for Lab 4, 2.b) for the 
 Energia workshop with Educational Boosterpack Mk II by Luís Afonso
 
 Made in 12/02/2016 by Luís Afonso
 */

/* Macros for the accelerometer pins */
#define Acc_Xaxis_Pin 23
#define Acc_Yaxis_Pin 24
#define Acc_Zaxis_Pin 25


/*
  I tested this values on my boosterpack using 2.a).
  You should test your own values since they can vary.
*/
#define X_MAX 2871
#define X_MIN 1249
#define Y_MAX 2890
#define Y_MIN 1230
#define Z_MAX 2839
#define Z_MIN 1200
#define MARGIN 50

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



  /*
    Remember, X_MAX - MARGIN. While X_MIN + MARGIN. It would
    not make sense have X_MIN-MARGIN.
  */
  if(Xaxis_Value > X_MAX-MARGIN)
    Serial.println("X is parallel to gravity and facing up");
  else if(Xaxis_Value < X_MIN+MARGIN)
    Serial.println("X is parallel to gravity and facing down");
  else if(Yaxis_Value > Y_MAX-MARGIN)
    Serial.println("Y is parallel to gravity and facing up");
  else if(Yaxis_Value < Y_MIN+MARGIN)
    Serial.println("Y is parallel to gravity and facing down");
  else if(Zaxis_Value > Z_MAX-MARGIN)
    Serial.println("Z is parallel to gravity and facing up");
  else if(Zaxis_Value < Z_MIN+MARGIN)
    Serial.println("Z is parallel to gravity and facing down");
  else
    Serial.println("No axis parallel");



  delay(100);


}



