/**********************************************************************************
**                                                                               **
**                              NOM                                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledA = 5;          // donar nom al pin 5 de l’Arduino
const int ledB = 6;          // donar nom al pin 6 de l’Arduino
const int ledC = 7;          // donar nom al pin 7 de l’Arduino
const int ledD = 8;          // donar nom al pin 8 de l’Arduino
const int ledE = 9;          // donar nom al pin 9 de l’Arduino
const int ledF = 10;         // donar nom al pin 10 de l’Arduino
const int ledG = 11;         // donar nom al pin 11 de l’Arduino
const int ledH = 12;         // donar nom al pin 12 de l’Arduino
unsigned long temps1=1000;                             //zona temporal 1


//********** Setup ****************************************************************

  void setup() {
  Serial.begin(9600);                               //definir velocitat
  
  pinMode(ledA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(ledB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledG, OUTPUT);     // definir el pin 11 com una sortida
  
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, HIGH);    
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, LOW);    
  digitalWrite(ledG, LOW);   

  delay (temps1);

  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, HIGH);    
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, LOW);   

  delay (temps1);

  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, HIGH);    
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, LOW);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);   

  delay (temps1);

  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, LOW);    
  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, HIGH);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);   

  delay (temps1);

  digitalWrite(ledA, LOW);    
  digitalWrite(ledB, HIGH);    
  digitalWrite(ledC, LOW);    
  digitalWrite(ledD, LOW);    
  digitalWrite(ledE, HIGH);    
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);   

  delay (temps1);

  

  
  

}
