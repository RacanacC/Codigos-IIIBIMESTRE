/*
 Fundación Kinal
 Centro Educativo Técnico Laboral Kinal
 Electrónica
 Grado: Quinto
 Sección: A
 Curso: Taller de Electrónica Digital y Reparación de Computadoras I
 Nombre: Luis Alexander Racanac Canahui
 Carné: 2022083
 Proyecto: Uso de temporizador  Tiker y temperatura
*/


#define button 2 //Directivas de preprocesador
#include<Ticker.h> //Libreiras 
#include<OneWire.h>
#include<DallasTemperature.h>

//Funciones ISR
void temperatura();
void estado_pulsador();


OneWire ourWire(4); 
Ticker Envio_temperatura(temperatura, 3000); 
Ticker Envio_estado_pulsador(estado_pulsador, 6000);
DallasTemperature sensors(&ourWire);


void setup() {
  Serial.begin(9600); // Inicio comunicación serial
  Serial.println("----Bienvenido----");
  Envio_temperatura.start();
  Envio_estado_pulsador.start();
  pinMode(button, INPUT);
}

void loop() {
 Envio_temperatura.update();
 Envio_estado_pulsador.update();
}

void temperatura(){
  sensors.requestTemperatures();   
  int temp = sensors.getTempCByIndex(0);   
  Serial.print("La temperatura es: ");
  Serial.print(temp);
  Serial.println("C");
}

void estado_pulsador(){
   int B = digitalRead(button);
   if(B==HIGH){
    Serial.println("EL BOTON ESTA PRESIONADO");
   }
   if(B==LOW){
    Serial.println("EL BOTON NO ESTA PRESIONADO");
   }
}
