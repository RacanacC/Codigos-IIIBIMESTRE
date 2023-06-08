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
#define ledR 3
#define ledG 5
#define ledB 6
#define POT A7
int V;
int Velocidad;
void setup() {
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(POT, INPUT);
}
void loop() {
  V = analogRead(20);
  Velocidad = map(V,0,1023,0,255);
  analogWrite(ledR, 174);
  analogWrite(ledG, 92);
  analogWrite(ledB,230);
  delay(Velocidad);
  analogWrite(ledR, 255);
  analogWrite(ledG, 255);
  analogWrite(ledB, 255);
  delay(Velocidad);
  analogWrite(ledR, 0);
  analogWrite(ledG, 255);
  analogWrite(ledB, 255);
  delay(Velocidad);
  analogWrite(ledR, 189);
  analogWrite(ledG, 174);
  analogWrite(ledB, 20);
  delay(Velocidad);
  analogWrite(ledR, 225);
  analogWrite(ledG, 87);
  analogWrite(ledB, 35);
  delay(Velocidad);
}
