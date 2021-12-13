/**********************************************************************************
**                                 Fade LEDs                                     **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino

int valPot0;                 // guardar valor del potenciometre
float llum= 1.24;

//********** Setup ****************************************************************
void setup()
{
  
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode (pot0, INPUT);
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(0);   // llegir valor del potenciòmetre

  
  
  if ( 0<valPot0 && valPot0<205){
  analogWrite(led0, valPot0*llum);     // posar PWM del pin 3 a x
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  
  }

   
   
  if ( 206<valPot0 && valPot0<410){
  
  analogWrite(led0, 255);     // posar PWM del pin 3 a 255
  analogWrite(led1, (valPot0-206)*llum);     // posar PWM del pin 5 a x
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  
  }

  if ( 411<valPot0 && valPot0<614){
  analogWrite(led0, 255);     // posar PWM del pin 3 a 255
  analogWrite(led1, 255);     // posar PWM del pin 5 a 255
  analogWrite(led2, (valPot0-411)*llum);     // posar PWM del pin 6 a x
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  
  }

  if ( 615<valPot0 && valPot0<819){
  analogWrite(led0, 255);     // posar PWM del pin 3 a 255
  analogWrite(led1, 255);     // posar PWM del pin 5 a 255
  analogWrite(led2, 255);     // posar PWM del pin 6 a 255
  analogWrite(led3, (valPot0-615)*llum);     // posar PWM del pin 9 a x
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  
  }

  if ( 820<valPot0 && 1024>valPot0){
  analogWrite(led0, 255);     // posar PWM del pin 3 a 255
  analogWrite(led1, 255);     // posar PWM del pin 5 a 255
  analogWrite(led2, 255);     // posar PWM del pin 6 a 255
  analogWrite(led3, 255);     // posar PWM del pin 9 a 255
  analogWrite(led4, (valPot0-820)*llum);     // posar PWM del pin 10 a x
  
 }
  
  

}
