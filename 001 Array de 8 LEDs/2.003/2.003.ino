/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledPin[] = {5, 6, 7, 8, 9, 10, 11, 12};   // donar nom en un array als pins 
const int buttonPin2 = 2;             // donar nom al pin 2 de l’Arduino
const int buttonPin3 = 3;             // donar nom al pin 3 de l’Arduino
boolean buttonEstat2 = LOW;           // definir variable d'estat pel polsador
boolean buttonEstat3 = LOW;           // definir variable d'estat pel polsador

int ledNum = 8;                   // definir variable de número de leds
int num = 0;                      // definir variable del número a mostrar

//********** Setup ****************************************************************
void setup()
{
  for(int i = 0; i < ledNum; i++) // definir els pins com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(buttonPin2, INPUT);      // definir el pin 2 com una entrada
  pinMode(buttonPin3, INPUT);      // definir el pin 3 com una entrada
  for(int j = 0; j < ledNum ; j++)     // els leds mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }
}

//********** Loop *****************************************************************
void loop()
{
  buttonEstat2 = digitalRead(buttonPin2);
  if (buttonEstat2 == HIGH)
  { 
    num = num + 1;                 // incrementar el número a mostrar
    if (num == 256)       // quan ja ha ensenyat el 255 tornar al 0  
           {
              num = 0;
           }    
    for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j)); // del "num" llegeix bit per bit (per aixo els 4 cops) si hi ha un 0 o un 1,i escriu el resultat
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }

  buttonEstat3 = digitalRead(buttonPin3);
  if (buttonEstat3 == HIGH)
  { 
    num = num - 1;                 // decrementa el número a mostrar
    if (num < 0)       // quan ja ha ensenyat el 0 tornar al 255  
           {
              num = 255;
           }    
    for(int j = 0; j < ledNum ; j++)   // actualitzar estat leds per mostrar número
    { 
      digitalWrite(ledPin[j], bitRead(num, j)); // del "num" llegeix bit per bit (per aixo els 8 cops) si hi ha un 0 o un 1,i escriu el resultat
    }
    delay(500);    // per evitar que en una pulsació curta salti més d'un número 
  }
}

//********** Funcions *************************************************************
