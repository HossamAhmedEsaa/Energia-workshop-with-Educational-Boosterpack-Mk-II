/*
  Resolution for Lab 4, 1.d) for the 
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
      You need to use a float. 3.3/4095 will give you a very small value bellow 0 and
    the final value will be a decimal number.
      Note that you should avoid using floats when using a MCU. Floats can take a realy
    long time to calculate! It can be 40x times slower than integer math! In a time 
    critical application this can be very bad.
     Some MCUs already have a floating point unit, meaning they take pretty much the same 
     time to do float math as they do integers, in those you can use floats just fine (but not doubles). 
   All the TM4C launchpads and the MSP432 (not the MSP430) have a floating point unit.
  */
  float Yaxis_Voltage =  (3.3/4095) * Yaxis_Value;
  float Xaxis_Voltage =  (3.3/4095) * Xaxis_Value;
  
  Serial.print("The Y axis voltage is: ");
  Serial.print(Yaxis_Voltage);
  Serial.print("V ; The X axis voltage is: ");
  Serial.print(Xaxis_Voltage);
  Serial.println("V");
  delay(100);


}

