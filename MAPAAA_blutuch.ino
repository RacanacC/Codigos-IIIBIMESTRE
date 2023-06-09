/*
 * Fundacion Kinal
 * Centro educativo tecnico laboral Kinal
 * Electronica
 * Grado: Quinto
 * Sección: A
 * Curso: Taller de electronica digital y reparación de computadoras I
 * Nombre: Luis Alexander Racanac Canahui
 * Carnet: 2022083
 * Proyecto: Mapa de Guatemala Bluetooth
*/                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              

#include <Wire.h>
#include <PCF8574.h>
#define LED_JALAPA 3
#define LED_CHIMALTENANGO 4
#define LED_QUETZALTE 5
#define LED_PROGRESO 6
#define LED_RETALH 7
#define LED_OLOL 14
#define LED_TOTONI 15
#define LED_SACATEP 16
#define BUZZ 11

String inf_recibida;
int i;
int A = 1;
int B = 1;
int NumAleatorio=0;
bool estado;
int a = 1;
int b = 1;
int c = 1;
int d = 1;
int e = 1;
int f = 1;
int g = 1;
int h = 1;
int x = 1;
int j = 1;
int k = 1;
int l = 1;
int m = 1;
int n = 1;
int z = 1;
int o = 1;
int p = 1;
int q = 1;
int r = 1;
int s = 1;
int t = 1;
int u = 1;

void Buzzer();
void lectura();
void next();
void correcto();

PCF8574 expansor_PCF1(0x27);
PCF8574 expansor_PCF2(0x26);

void setup(){
  Serial.begin(9600);
  pinMode(LED_JALAPA, OUTPUT);
  pinMode(LED_CHIMALTENANGO, OUTPUT);
  pinMode(LED_QUETZALTE, OUTPUT);
  pinMode(LED_PROGRESO, OUTPUT);
  pinMode(LED_RETALH, OUTPUT);
  pinMode(LED_OLOL, OUTPUT);
  pinMode(LED_TOTONI, OUTPUT);
  pinMode(LED_SACATEP, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  expansor_PCF1.begin();
  expansor_PCF2.begin();
  Wire.begin();
  randomSeed(analogRead(A7));
  Serial.println(F("                           <====LOS DEPARTAMENTOS DE====>"));
  Serial.println(F("                                        <====GUATEMALA====>"));
  Serial.println(F(" "));
  delay(2300);
}

void loop(){
  if(A==1){
    NumAleatorio = random(1,23);
    i = NumAleatorio;
    A = 2;
  }
  switch(i){
    case 1: 
         if(a==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Petén?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Flores"){
           Buzzer();
           correcto();
           next();
           a = 2;
         }
         }else
         next();
         break;
    case 2: 
         if(b==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Izabal?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Puerto Barrios"){
           Buzzer();
           correcto();
           next();
           b = 2;
         }
         }else
         next();
         break;
    case 3: 
         if(c==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Alta Verapaz?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Cobán"){
           Buzzer();
           correcto();
           next();
           c = 2;
         }
         }else
         next();
         break;
    case 4: 
         if(d==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Quiché?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Santa Cruz del Quiché"){
           Buzzer();
           correcto();
           next();
           d = 2;
         }
         }else
         next();
         break;
   case 5: 
         if(e==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Huehuetenango?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Huehuetenango"){
           Buzzer();
           correcto();
           next();
           e = 2;
         }
         }else
         next();
         break;
    case 6: 
         if(f==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Escuintla?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Escuintla"){
           Buzzer();
           correcto();
           next();
           f = 2;
         }
         }else
         next();
         break;
    case 7: 
         if(g==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de San Marcos?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="San Marcos"){
           Buzzer();
           correcto();
           next();
           g = 2;
         }
         }else
         next();
         break;
    case 8: 
         if(h==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Jutiapa?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Jutiapa"){
           Buzzer();
           correcto();
           next();
           h = 2;
         }
         }else
         next();
         break;
    case 9: 
         if(x==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Baja Verapaz?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Salamá"){
           Buzzer();
           correcto();
           next();
           x = 2;
         }
         }else
         next();
         break;
    case 10: 
         if(j==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Santa Rosa?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Cuilapa"){
           Buzzer();
           correcto();
           next();
           j = 2;
         }
         }else
         next();
         break;
    case 11: 
         if(k==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Zacapa?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Zacapa"){
           Buzzer();
           correcto();
           next();
           k = 2;
         }
         }else
         next();
         break;
    case 12: 
         if(l==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Suchitepequez?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Mazatenango"){
           Buzzer();
           correcto();
           next();
           l = 2;
         }
         }else
         next();
         break;
   case 13: 
         if(m==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Chiquimula?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Chiquimula"){
           Buzzer();
           correcto();
           next();
           m = 2;
         }
         }else
         next();
         break;
   case 14: 
         if(n==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Guatemala?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Ciudad de Guatemala"){
           Buzzer();
           correcto();
           next();
           n = 2;
         }
         }else
         next();
         break;
   case 15: 
         if(z==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Jalapa?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Jalapa"){
           Buzzer();
           correcto();
           next();
           z = 2;
         }
         }else
         next();
         break;
    case 16: 
         if(o==1){
         if(B==1){
          Serial.println(F("                          ¿Cuál es la cabecera de Chimaltenango?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Chimaltenango"){
           Buzzer();
           correcto();
           next();
           o = 2;
         }
         }else
         next();
         break;
    case 17: 
         if(p==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Quetzaltenango?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Quetzaltenango"){
           Buzzer();
           correcto();
           next();
           p = 2;
         }
         }else
         next();
         break;
    case 18: 
         if(q==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de El Progreso?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida== "Guastatoya"){
           Buzzer();
           correcto();
           next();
           q = 2;
         }
         }else
         next();
         break;
    case 19: 
         if(r==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Retalhuleu?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Retalhuleu"){
           Buzzer();
           correcto();
           next();
           r = 2;
         }
         }else
         next();
         break;
    case 20: 
         if(s==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Sololá?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Sololá"){
           Buzzer();
           correcto();
           next();
           s = 2;
         }
         }else
         next();
         break;
    case 21: 
         if(t==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Totonicapán?"));
          B = 2;
         }
         while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="Totonicapán"){
           Buzzer();
           correcto();
           next();
           t = 2;
         }
         }else
         next();
         break;
    case 22: 
         if(u==1){
         if(B==1){
          Serial.println(F("                         ¿Cuál es la cabecera de Sacatepéquez?"));
          B = 2;
         }
          while(Serial.available()>0){
          inf_recibida = Serial.readStringUntil('\n');
          }
         if(inf_recibida=="La Antigua Guatemala"){
           Buzzer();
           correcto();
           next();
           u = 2;
         }
         }else
         next();
         break;
  }

 if(a==2){
  expansor_PCF1.write(0, LOW);//PETEN
 }
 if(b==2){
  expansor_PCF1.write(1, LOW);//IZABAL
 }
 if(c==2){
  expansor_PCF1.write(2, LOW);//ALTA VERAPAZ
 }
 if(d==2){
  expansor_PCF1.write(3, LOW);//QUICHE
 }
 if(e==2){
  expansor_PCF1.write(4, LOW);//HUEHUETENANGO
 }
 if(f==2){
  expansor_PCF1.write(5, LOW);//ESCUINTLA
 }
 if(g==2){
  expansor_PCF1.write(6, LOW);//SAN MARCOS
  expansor_PCF1.write(7, LOW);
 }
 if(h==2){
  expansor_PCF2.write(0, LOW);//JUTIAPA
 }
 if(x==2){
  expansor_PCF2.write(1, LOW);//BAJA VERAPAZ
 }
 if(j==2){
  expansor_PCF2.write(2, LOW);//SANTA ROSA
 }
 if(k==2){
  expansor_PCF2.write(3, LOW);//ZACAPA
  expansor_PCF2.write(4, LOW);
 }
 if(l==2){
  expansor_PCF2.write(5, LOW);//SUCHITEPEQUEZ
 }
 if(m==2){
  expansor_PCF2.write(6, LOW);//CHIQUIMULA
 }
 if(n==2){
  expansor_PCF2.write(7, LOW);//GUATEMALA
 }
 if(z==2){
  digitalWrite(LED_JALAPA, HIGH);
 }
 if(o==2){
  digitalWrite(LED_CHIMALTENANGO, HIGH);
 }
 if(p==2){
  digitalWrite(LED_QUETZALTE, HIGH);
 }
 if(q==2){
  digitalWrite(LED_PROGRESO, HIGH);
 }
 if(r==2){
  digitalWrite(LED_RETALH, HIGH);
 }
 if(s==2){
  digitalWrite(LED_OLOL, HIGH);
 }
 if(t==2){
  digitalWrite(LED_TOTONI, HIGH);
 }
 if(u==2){
  digitalWrite(LED_SACATEP, HIGH);
 }

if(a==2 && b==2 && c==2 && d==2 && e==2 && f==2 && g==2 && h==2 && x==2 && j==2 && k==2 && l==2 && m==2 && n==2 && z==2 && o==2 && p==2 && q==2 && r==2 && s==2 && t==2 && u==2){
  expansor_PCF1.write(0, LOW);//PETEN
  expansor_PCF1.write(1, LOW);//IZABAL
  expansor_PCF1.write(2, LOW);//ALTA VERAPAZ
  expansor_PCF1.write(3, LOW);//QUICHE
  expansor_PCF1.write(4, LOW);//HUEHUETENANGO
  expansor_PCF1.write(5, LOW);//ESCUINTLA
  expansor_PCF1.write(6, LOW);//SAN MARCOS
  expansor_PCF1.write(7, LOW);
  expansor_PCF2.write(0, LOW);//JUTIAPA
  expansor_PCF2.write(1, LOW);//BAJA VERAPAZ
  expansor_PCF2.write(2, LOW);//SANTA ROSA
  expansor_PCF2.write(3, LOW);//ZACAPA
  expansor_PCF2.write(4, LOW);
  expansor_PCF2.write(5, LOW);//SUCHITEPEQUEZ
  expansor_PCF2.write(6, LOW);//CHIQUIMULA
  expansor_PCF2.write(7, LOW);//GUATEMALA
  digitalWrite(LED_JALAPA, HIGH);
  digitalWrite(LED_CHIMALTENANGO, HIGH);
  digitalWrite(LED_QUETZALTE, HIGH);
  digitalWrite(LED_PROGRESO, HIGH);
  digitalWrite(LED_RETALH, HIGH);
  digitalWrite(LED_OLOL, HIGH);
  digitalWrite(LED_TOTONI, HIGH);
  digitalWrite(LED_SACATEP, HIGH);
  delay(700);
  expansor_PCF1.write(0, HIGH);//PETEN
  expansor_PCF1.write(1, HIGH);//IZABAL
  expansor_PCF1.write(2, HIGH);//ALTA VERAPAZ
  expansor_PCF1.write(3, HIGH);//QUICHE
  expansor_PCF1.write(4, HIGH);//HUEHUETENANGO
  expansor_PCF1.write(5, HIGH);//ESCUINTLA
  expansor_PCF1.write(6, HIGH);//SAN MARCOS
  expansor_PCF1.write(7, HIGH);
  expansor_PCF2.write(0, HIGH);//JUTIAPA
  expansor_PCF2.write(1, HIGH);//BAJA VERAPAZ
  expansor_PCF2.write(2, HIGH);//SANTA ROSA
  expansor_PCF2.write(3, HIGH);//ZACAPA
  expansor_PCF2.write(4, HIGH);
  expansor_PCF2.write(5, HIGH);//SUCHITEPEQUEZ
  expansor_PCF2.write(6, HIGH);//CHIQUIMULA
  expansor_PCF2.write(7, HIGH);//GUATEMALA
  digitalWrite(LED_JALAPA, LOW);
  digitalWrite(LED_CHIMALTENANGO, LOW);
  digitalWrite(LED_QUETZALTE, LOW);
  digitalWrite(LED_PROGRESO, LOW);
  digitalWrite(LED_RETALH, LOW);
  digitalWrite(LED_OLOL, LOW);
  digitalWrite(LED_TOTONI, LOW);
  digitalWrite(LED_SACATEP, LOW);
}
}  

void next(){
  A = 1;
  B = 1;
}

void correcto(){
  Serial.println(F("                    CORRECTO"));
}

void Buzzer(){
  tone(BUZZ, 293,665);
     delay(500);
   noTone(BUZZ);
}
