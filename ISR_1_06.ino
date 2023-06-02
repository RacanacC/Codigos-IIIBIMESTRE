/*
 Fundación Kinal
 Centro Educativo Técnico Laboral Kinal
 Electrónica
 Grado: Quinto
 Sección: A
 Curso: Taller de Electrónica Digital y Reparación de Computadoras I
 Nombre: Luis Alexander Racanac Canahui
 Carné: 2022083
 Proyecto: Contador 0-50 con interrupciones
*/

// Directivas de preprocesador
#define A1 4
#define B1 5
#define C1 6
#define A2 7
#define B2 8
#define C2 9
#define D2 10
#define bton_suma 2
#define bton_resta 3
// Funciones ISR
void Resta();  
void Suma();
// Variables
int i=0;
volatile static bool G = false;
void setup() {
  Serial.begin(9600); //Inicio la comunicación serial
  pinMode(A1, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(C2, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(bton_suma, INPUT); 
  pinMode(bton_resta, INPUT); 
  attachInterrupt(digitalPinToInterrupt(bton_suma), Suma, RISING);
  attachInterrupt(digitalPinToInterrupt(bton_resta), Resta, RISING);
  Serial.println("Bienvenido");
}

void loop() {
 if(G==true){
  G = false;
   if(i<0){
  i=50;
 }
  if(i>50){
  i=0;
 }
  Serial.println(i);
  switch(i){
  case 0: 
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
  case 1: 
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
  case 2:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
  case 3:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
  case 4:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
  case 5:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
  case 6:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
  case 7:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
  case 8:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
  case 9:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
  case 10:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
  case 11:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 12: 
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 13:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 14: 
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 15: 
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 16:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 17:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 18:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
 case 19:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
 case 20:
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 21:
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 22:
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 23:
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 24:
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 25:
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 26: 
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 27:
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 28:
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
 case 29:
    digitalWrite(A1, LOW);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
 case 30: 
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 31:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 32:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 33:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 34:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 35:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 36: 
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 37:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 38:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
 case 39:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, HIGH);
    digitalWrite(C1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
 case 40:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 41:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 42:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 43:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
    break;
 case 44:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 45: 
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 46: 
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 47: 
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(D2, LOW);
    break;
 case 48:
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
 case 49: 
    digitalWrite(A1, LOW);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, HIGH);
    break;
 case 50:
    digitalWrite(A1, HIGH);
    digitalWrite(B1, LOW);
    digitalWrite(C1, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(B2, LOW);
    digitalWrite(C2, LOW);
    digitalWrite(D2, LOW);
  }
 }
 
}


void Suma(){
 G = true;
 i = i + 1;
 Serial.println(i);
}
void Resta(){ 
  G = true;
 i = i - 1;
 Serial.println(i);
}
