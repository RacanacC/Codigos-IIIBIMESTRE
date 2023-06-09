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
//Directivas de preprocesador 
#define analog A6

//Librerias
#include<LiquidCrystal_I2C.h>

//Constructores
LiquidCrystal_I2C lcd_Canahui(0x27, 16, 2);


void setup() {
 Serial.begin(9600);
 lcd_Canahui.init();
 lcd_Canahui.backlight();
 lcd_Canahui.print("Valor resistor: ");
 lcd_Canahui.setCursor(12,1);
 lcd_Canahui.print("ohm");
}
void loop() {
  float Vout = analogRead(analog);
  float B = Vout*5;
  float operacion = B/1023;
  float Resultado = (5/operacion)-1;
  lcd_Canahui.setCursor(2,1);
  lcd_Canahui.print(Resultado);
  if(Vout==0){
    lcd_Canahui.setCursor(2,1);
    lcd_Canahui.print("       ");
  }

 
}
