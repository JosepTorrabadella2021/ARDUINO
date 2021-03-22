/****************************************************************
* *                                                           * *
* *                           TÍTOL:                          * *
* *         Posar un nom representatiu del programa           * *
* *                                                           * *
* * NOM:Josep Torrabadella Guix              DATA: xx/xx/20xx * *
****************************************************************/
//************************* INCLUDE *****************************


//************************ VARIABLES ****************************
int comptar = 11;
int i = 0;


//************************** SETUP ******************************
void setup() {              // configura el final de salida

  Serial.begin(9600);    // obre el port sèrie configurant la velocitat a 9600bps
  
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  for (int i=0; i <= comptar; i++)
  {
    
    if (i == comptar)
    {
      Serial.print(i);
    }
    else
    {
      Serial.print(i);
      Serial.print("-");
    }
    
  } 
}


//*************************** LOOP ******************************
void loop() {               // inicia el bucle del programa

}
//************************* FUNCTIONS ***************************
