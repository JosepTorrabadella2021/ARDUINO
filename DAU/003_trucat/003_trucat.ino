/**********************************************************************************
**                                                                               **
**                              DAU                                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledPin[] = {5, 6, 7, 8, 9, 10, 11};   // donar nom en un array als pins 
const int buttonPin = 2;             // donar nom al pin 2 de l’Arduino
boolean buttonEstat = LOW;           // definir variable d'estat pel polsador
unsigned long temps1=1000;
int ledNum = 7;                   // definir variable de número de leds
int numerorandom= 0;
int pin = 7;
unsigned long duration;

//********** Setup ****************************************************************
void setup()
{
  for(int i = 0; i < ledNum; i++) // definir els pins com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);      // definir el pin 2 com una entrada
  
  for(int j = 0; j < ledNum ; j++)     // els leds mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }

    pinMode(pin, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
   buttonEstat = digitalRead (buttonPin);
  while (buttonEstat == HIGH)
  {
    numerorandom = random (1,7);
    
    duration = pulseIn(pin, HIGH);
    if (duration>3000)
    digitalWrite(5,1);    
    digitalWrite(6,0);    
    digitalWrite(7,0);    
    digitalWrite(8,1);    
    digitalWrite(9,0);    
    digitalWrite(10,0);    
    digitalWrite(11,1); 

    delay (3000);

    else if (duration<3000)
    switch (numerorandom)
    {
      case 1:
    digitalWrite(5,0);    
    digitalWrite(6,0);    
    digitalWrite(7,0);    
    digitalWrite(8,0);    
    digitalWrite(9,0);    
    digitalWrite(10,0);    
    digitalWrite(11,1);    

    delay (temps1);
    break;
    
    case 2:

    digitalWrite(5,0);    
  digitalWrite(6,1);    
  digitalWrite(7,0);    
  digitalWrite(8,0);    
  digitalWrite(9,1);    
  digitalWrite(10,0);    
  digitalWrite(11,0);   

  delay (temps1);
  
    break;
  
  case 3:
  digitalWrite(5,0);    
  digitalWrite(6,0);    
  digitalWrite(7,1);    
  digitalWrite(8,0);    
  digitalWrite(9,0);    
  digitalWrite(10,1);    
  digitalWrite(11,1);   

  delay (temps1);
    break;
    
   case 4:
   digitalWrite(5,0);    
  digitalWrite(6,1);    
  digitalWrite(7,1);    
  digitalWrite(8,0);    
  digitalWrite(9,1);    
  digitalWrite(10,1);    
  digitalWrite(11,0);   

  delay (temps1);

  break;

  case 5:
  digitalWrite(5,0);    
  digitalWrite(6,1);    
  digitalWrite(7,1);    
  digitalWrite(8,0);    
  digitalWrite(9,1);    
  digitalWrite(10,1);    
  digitalWrite(11,1);  

  delay (temps1);

  break;
  
  case 6:

  digitalWrite(5,1);    
  digitalWrite(6,1);    
  digitalWrite(7,1);    
  digitalWrite(8,1);    
  digitalWrite(9,1);    
  digitalWrite(10,1);    
  digitalWrite(11,0);   

  delay (temps1);

  break;
  }
  buttonEstat = digitalRead (buttonPin);
  }


 
    
  

  
  }   
//********** Funcions *************************************************************
