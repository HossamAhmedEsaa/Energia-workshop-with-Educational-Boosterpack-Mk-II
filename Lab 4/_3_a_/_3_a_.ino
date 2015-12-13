/*

  Resolution for Lab 4, 3.a) for the 
  Energia workshop with Educational Boosterpack Mk II by Luís Afonso
  
  Made in 13/12/2015 by Luís Afonso
*/

// The LED used is the Red LED on the educational boosterpack
#define LED 39

/* If using a MSP430 the longs are necessary */
long Time_On = 0; //
long Time_Off = 0; //
long Period = 2000; // 2 seconds


void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT); 

}

// the loop routine runs over and over again forever:
void loop() {

  for(int i=0; i <= 100; i+=10){
    Generate_PWM(i);
    digitalWrite(LED, HIGH);  
    delay(Time_On);               
    digitalWrite(LED, LOW);    
    delay(Time_Off);               
  }
}

/* Changes the duty */
void Generate_PWM(int _Duty){
  
  /* You will find out later that it's a 
  good idea to avoid using numbers with decimals.
    That's why here you first multiply the Period
  by the duty and then divide by 100.Instead of doing 
  duty/100 to get the percentage from 0 to 1 first
  */  
  Time_On = (Period * _Duty)/100;
  
  /* The off time then it's simply what's 
  left over after the on time */
  Time_Off = Period - Time_On;      
}
