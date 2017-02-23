#include <EEPROM.h>
#include <UIPEthernet.h>
#include <PubSubClient.h>
#include <RotaryEncoder.h>
//#include <Servo.h>
int pos = 0;

#define UMA_VOLTA 12
#define POSICAO_SERVO_ABERTO 150
#define POSICAO_SERVO_FECHADO 30



//OUTPUTS
const int releLuzCapitao = 2;
const int releLuzConves =    3;
const int releGaveta = 4;
const int releSaida  = 5;
const int relePassagem = 6;
const int releBau = 9;
const int ledConfig = 8;
const int ledOn = 7;
//INPUTS
const int sensorGaveta =  A0;
const int sensorBarco1 = A1;
const int sensorBarco2 = A4;
const int sensorBarco3 = A5;
const int sensorBau = A6;


//DECLARAÇÃO DAS VARIÁVEIS

boolean start = false;
boolean acaoBau = false;
boolean acaoTimao = false;
boolean acaoPassagem = false;
boolean preparar = false;
boolean startSensorGaveta = false;
boolean startSensorBarcos = false;
boolean startSensorBau = false;
boolean startSensorTimao = false;
boolean abriuGaveta = false;
boolean abriuPassagem = false;
boolean abriuSaida = false;
boolean abriuBau = false;

boolean luzCapitao = true;
boolean luzConves = false;
boolean modoManual = false;
boolean etapa1Timao = false;
boolean etapa2Timao = false;

int contador = 0;
int posicaoTimao = 0;
int girouWest = 0;
int girouEast = 0;


RotaryEncoder encoder(A2, A3);


void setup(){
Serial.begin(9600);

pinMode(releLuzCapitao,OUTPUT);
pinMode(releLuzConves,OUTPUT);
pinMode(relePassagem,OUTPUT);
pinMode(releGaveta,OUTPUT);
pinMode(releSaida,OUTPUT);
pinMode(releBau,OUTPUT);
pinMode(ledOn,OUTPUT);
pinMode(ledConfig,OUTPUT);
//digitalWrite(releSaida,LOW);
digitalWrite(releBau,HIGH);
digitalWrite(relePassagem,HIGH);//OK
digitalWrite(releSaida,HIGH);//OK
digitalWrite(releGaveta,HIGH);//OK

digitalWrite(releLuzCapitao,HIGH);//OK NORMALMENTE FECHADO
//digitalWrite(releLuzConves,HIGH);//NORMALMENTE ABERTO*/
  
}

void loop(){
/*
Serial.print("Sensor barcos =");
Serial.print(digitalRead(sensorBarco1));
Serial.print(" ");
Serial.print(digitalRead(sensorBarco2));
Serial.print(" ");
Serial.print(digitalRead(sensorBarco3));
Serial.println(" ");*/

encoder.tick();

  int newPos = encoder.getPosition();
  if (pos != newPos) {
    Serial.print(newPos);
    Serial.println();
    pos = newPos;
  }
 
  
}

