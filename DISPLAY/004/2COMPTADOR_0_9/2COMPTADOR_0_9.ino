/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
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
}

//********** Loop *****************************************************************
void loop()
{
  
  
   
  digitalWrite(5,0);    
  digitalWrite(6,0);    
  digitalWrite(7,0);    
  digitalWrite(8,0);    
  digitalWrite(9,0);    
  digitalWrite(10,0);    
  digitalWrite(11,0);   

 buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   

  delay (temps1);

  digitalWrite(5,0);    
  digitalWrite(6,1);    
  digitalWrite(7,1);    
  digitalWrite(8,0);    
  digitalWrite(9,0);    
  digitalWrite(10,0);    
  digitalWrite(11,0);

  buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   

  delay (temps1);

  digitalWrite(5,1);    
  digitalWrite(6,1);    
  digitalWrite(7,0);    
  digitalWrite(8,1);    
  digitalWrite(9,1);    
  digitalWrite(10,0);    
  digitalWrite(11,1);  

  buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   

  delay (temps1);

  digitalWrite(5,1);    
  digitalWrite(6,1);    
  digitalWrite(7,1);    
  digitalWrite(8,1);    
  digitalWrite(9,0);    
  digitalWrite(10,0);    
  digitalWrite(11,1);   

buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   
  
  delay (temps1);

  digitalWrite(5,0);    
  digitalWrite(6,1);    
  digitalWrite(7,1);    
  digitalWrite(8,0);    
  digitalWrite(9,0);    
  digitalWrite(10,1);    
  digitalWrite(11,1);   

  buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   

  delay (temps1);

  digitalWrite(5,1);    
  digitalWrite(6,0);    
  digitalWrite(7,1);    
  digitalWrite(8,1);    
  digitalWrite(9,0);    
  digitalWrite(10,1);    
  digitalWrite(11,1);   

  buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   

  delay (temps1);

  digitalWrite(5,0);    
  digitalWrite(6,0);    
  digitalWrite(7,1);    
  digitalWrite(8,1);    
  digitalWrite(9,1);    
  digitalWrite(10,1);    
  digitalWrite(11,1);   

  buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   

  delay (temps1);

  digitalWrite(5,1);    
  digitalWrite(6,1);    
  digitalWrite(7,1);    
  digitalWrite(8,0);    
  digitalWrite(9,0);    
  digitalWrite(10,0);    
  digitalWrite(11,0);   

buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   
  
  delay (temps1);

  digitalWrite(5,1);    
  digitalWrite(6,1);    
  digitalWrite(7,1);    
  digitalWrite(8,1);    
  digitalWrite(9,1);    
  digitalWrite(10,1);    
  digitalWrite(11,1);   

  buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   

  delay (temps1);

  digitalWrite(5,1);    
  digitalWrite(6,1);    
  digitalWrite(7,1);    
  digitalWrite(8,0);    
  digitalWrite(9,0);    
  digitalWrite(10,1);    
  digitalWrite(11,1);   

  buttonEstat = digitalRead(buttonPin);
  
if (buttonEstat == HIGH)
     {
    temps1=30000;
    }
  else if (buttonEstat == LOW)     
    { 
  temps1=1000;
     }   

  delay (temps1);

   
  
  }   
//********** Funcions *************************************************************
