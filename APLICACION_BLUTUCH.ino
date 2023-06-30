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

#include <DallasTemperature.h>
#include <OneWire.h>
#include<Ticker.h>
#define LED 3

void temperatura();


OneWire ourWire(4);
DallasTemperature sensors(&ourWire);
Ticker Envio_temperatura(temperatura, 10000); 

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  Envio_temperatura.start();

}

void loop() {
  Envio_temperatura.update();
  if(Serial.available()>0){
        char inf_recibida = Serial.read();
        if(inf_recibida=='1'){
        digitalWrite(LED, LOW);
        }      
        if(inf_recibida=='2'){
        digitalWrite(LED, HIGH);
        
  }
 } 
}


void temperatura(){
  sensors.requestTemperatures();   
  float temp = sensors.getTempCByIndex(0);   
  Serial.println(temp);
}
