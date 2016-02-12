/*
  Resolution for Lab 4, 1.c) for the 
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
        Note this is for a 12bit ADC
        I chose 4000 as the upper limit, if the value is over 4000 then the 
      joystick y is fully forward. For the lower limit i choose 100. It was arbitrary 
      values that are near the maximum value 4095 and minimum 0. Note that simply chosing 
      when value==4095 or ==0 could not work. You may have noticed in 1.b) that the values 
      vary a bit even when the joystick is not moving and when you fully push the joystick 
      it's very hard to keep it right on the maximum or minimum.  
        Since this can vary a bit depending on the joystick and the ADC, we go with the safe
      route since this works with pretty much any.
        
       I used "else if" for efficiency. If Yaxis_Value > 4000 then there's no point of seeing 
     if other commands occur since they cant.
  */
  if(Yaxis_Value > 4000)
    Serial.println("Forward");
  else if(Yaxis_Value < 100)
    Serial.println("Backwards");
  else if(Xaxis_Value > 4000)
    Serial.println("Right");
  else if(Xaxis_Value < 100)
    Serial.println("Left");

  delay(100);


}


