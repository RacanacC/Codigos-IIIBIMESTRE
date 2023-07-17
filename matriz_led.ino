/*
 Fundación Kinal
 Centro Educativo Técnico Laboral Kinal
 Electrónica
 Grado: Quinto
 Sección: A
 Curso: Taller de Electrónica Digital y Reparación de Computadoras I
 Nombre: Luis Alexander Racanac Canahui
 Carné: 2022083
*/

#include <LedControl.h>   
#include <Ticker.h> 

//Directivas de preprocesador
#define dataPin0   12   
#define dataClock0 11   
#define dataLoad0  10   
#define BUZZER 3
#define Limit 400
#define MQ_SENSOR A40

float sensorValue;

void alerta(void);

//variable
volatile static bool estado_matriz;

//Constructores
LedControl matriz_led = LedControl(dataPin0,dataClock0,dataLoad0,1);

byte number_0[8]= {        
  B11011011,
  B11010011,
  B00110100,
  B10011111,
  B11111001,
  B00101100,
  B11001011,
  B11011011
};
byte number_1[8]= {       
  B00000010,
  B00001110,
  B00001110,
  B00111110,
  B00111100,
  B01101100,
  B01001000,
  B00111000
};
byte number_2[8]= {       
  B00000000,        
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
};

void setup()
{
  Serial.begin(9600); 
  Serial.println("MQ2 warming up!");
  delay(20000); // allow the MQ2 to warm up
  matriz_led.shutdown(0,false); 
  matriz_led.setIntensity(0,15); 
  matriz_led.clearDisplay(0);    
  pinMode(BUZZER,OUTPUT);
}
void loop() 
{

  sensorValue = analogRead(MQ_SENSOR); 
  unsigned int outputValue = map (sensorValue, 0, 1023, 0, 100);
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print("    Percent: ");
  Serial.print(outputValue);
  delay(250);
  
  if(sensorValue > Limit)
  {
    Serial.print(" | Smoke detected!");
    alerta();
    alerta();
    alerta();
    alerta();
    alerta();
      tone(BUZZER,300,400);
      noTone(BUZZER);
      tone(BUZZER,300,400);
  }
 
  else if(sensorValue < Limit){
    Serial.print(" | No smoke detected!");
    for(int i=0; i<8;i++)
      {
        matriz_led.setRow(0,i,number_0[i]);
      }
  }
  Serial.println("");
  delay(2000); 
  
}

void alerta(){
  matriz_led.clearDisplay(0);
      for(int i=0; i<8;i++)
      {
        matriz_led.setRow(0,i,number_1[i]);
      }
      delay(500);
      for(int i=0; i<8;i++)
      {
        matriz_led.setRow(0,i,number_2[i]);
      }
      delay(500);
}
