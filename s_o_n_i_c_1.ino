/*
PROJETO S.O.N.I.C.      21/02/2025
1º SÉRIE ELETRÔNICA
PROJETO AGV - SUPERFÍCIE CLARA E FAIXA ESCURA
PINO 6 - SENSOR DIREITO
PINO 7 - SENSOR ESQUERDO
PINO 5 - MOTOR ESQUERDO AVANTE
PINO 4 - MOTOR ESQUERDO REVERSO
PINO 3 - MOTOR DIREITO AVANTE
PINO 2 - MOTOR DIREITO REVERSO
PINO 11 - ATIVA MOTORES 
*/

void setup ()
{
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
  
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(11, HIGH); //HABILITA MOTORES

}//FECHA SETUP
  

void loop ()
{
  
  if (digitalRead(7)==0 && digitalRead(6)==0){digitalWrite(5, HIGH); digitalWrite(3, HIGH); digitalWrite(4, LOW); digitalWrite(2, LOW);}
  if (digitalRead(7)==0 && digitalRead(6)==1){digitalWrite(5, HIGH); digitalWrite(4, LOW); digitalWrite(3, LOW); digitalWrite(2, LOW);}
  if (digitalRead(7)==1 && digitalRead(6)==0){digitalWrite(5, LOW); digitalWrite(4, LOW); digitalWrite(3, HIGH); digitalWrite(2, LOW);}
  if (digitalRead(7)==1 && digitalRead(6)==1){digitalWrite(5, LOW); digitalWrite(4, LOW); digitalWrite(3, LOW); digitalWrite(2, LOW);}

}//FECHA VOID LOOP