/**********************************************************************************
**                                                                               **
**                              CRUÏLLA_DE_SEMÀFORS                              **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledPin[]={7,8,9,10,11,12};               //definir noms pels pins de sortida
int ledNum=6;                                      //definir variable de numero de Leds
int intermitencia=4;
unsigned long temps1=1000;                             //zona temporal 1
unsigned long temps2=4000;                             //zona temporal 2
unsigned long temps3=5000;                            //zona temporal 3


//********** Setup ****************************************************************

  void setup() {
  Serial.begin(9600);                               //definir velocitat
  for(int i = 0; i < ledNum; i++){                  // definir sortides
  
  pinMode(ledPin[i], OUTPUT);
  }
  for(int j = 0; j < ledNum ; j++){                 // posar leds a 0
  
  digitalWrite(ledPin[j], 0);
  }
}

//********** Loop *****************************************************************
void loop()
{
  //primera sequencia
  
  digitalWrite(7,1);     //A VERMELL                                                           
  digitalWrite(8,0);     //A AMBAR                                                           
  digitalWrite(9,0);     //A VERD                                                           
  
  digitalWrite(10,1);    //B VERMELL                                                          
  digitalWrite(11,0);    //B AMBAR                                                           
  digitalWrite(12,0);    //B VERD
  
  delay(temps1);                  

  //segona sequencia
  
  digitalWrite(7,1);     //A VERMELL                                                           
  digitalWrite(8,0);     //A AMBAR                                                           
  digitalWrite(9,0);     //A VERD                                                           
  
  digitalWrite(10,0);    //B VERMELL                                                          
  digitalWrite(11,0);    //B AMBAR                                                           
  digitalWrite(12,1);    //B VERD
  
  delay(temps2);    
                
  //TERCERA sequencia
  
  digitalWrite(7,1);     //A VERMELL 
  digitalWrite(8,0);     //A AMBAR                                                                                                                          
  digitalWrite(9,0);     //A VERD                                                           
  
  digitalWrite(10,0);    //B VERMELL
  digitalWrite(11,1);    //B AMBAR 
  digitalWrite(12,0);    //B VERD
  
  delay(temps1);

  for (int a = 0; a < intermitencia ; a++) 
     {                                                       
      digitalWrite(11,bitRead(a,0));    //a AMBAR
      delay (temps1);
      }
      

  //quarta sequencia
  
  digitalWrite(7,1);     //A VERMELL                                                           
  digitalWrite(8,0);     //A AMBAR                                                           
  digitalWrite(9,0);     //A VERD                                                           
  
  digitalWrite(10,1);    //B VERMELL                                                          
  digitalWrite(11,0);    //B AMBAR                                                           
  digitalWrite(12,0);    //B VERD
  
  delay(temps1); 

  //cinquena sequencia
  
  digitalWrite(7,0);     //A VERMELL                                                           
  digitalWrite(8,0);     //A AMBAR                                                           
  digitalWrite(9,1);     //A VERD                                                           
  
  digitalWrite(10,1);    //B VERMELL                                                          
  digitalWrite(11,0);    //B AMBAR                                                           
  digitalWrite(12,0);    //B VERD
  
  delay(temps2);
  
  //sisena sequencia
     
  digitalWrite(7,0);     //A VERMELL 
  digitalWrite(8,1);     //A AMBAR                                                                                                                          
  digitalWrite(9,0);     //A VERD                                                           
  
  digitalWrite(10,1);    //B VERMELL
  digitalWrite(11,0);    //B VERMELL 
  digitalWrite(12,0);    //B VERD
  
  delay(temps1);

  for (int a = 0; a < intermitencia ; a++) 
     {                                                       
      digitalWrite(8,bitRead(a,0));    //a AMBAR
      delay (temps1);
      }
      

  //setena sequencia
  
  digitalWrite(7,1);     //A VERMELL                                                           
  digitalWrite(8,0);     //A AMBAR                                                           
  digitalWrite(9,0);     //A VERD                                                           
  
  digitalWrite(10,1);    //B VERMELL                                                          
  digitalWrite(11,0);    //B AMBAR                                                           
  digitalWrite(12,0);    //B VERD
  
  delay(temps1); 

}
