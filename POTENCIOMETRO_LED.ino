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

#define LED 3
#define POT A7
int ValPOT;
int LUZ;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);

}

void loop() {
  ValPOT = analogRead(POT);
  LUZ = map(ValPOT,0,1023,0,255);
  analogWrite(LED, LUZ);

}
