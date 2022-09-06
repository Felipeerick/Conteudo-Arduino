//Autor: Felipe Erick; Instagram: liperick20_02

int Do = 13;
int re = 10;
int mi = 9;
int fa = 8;
int sol = 7;
int la = 6;
int si = 5;
int DoOitava = 4;
int buzzer = 2;
// lembre de colocar 5v e o terra do 5v no botao; e o pino de dados no terra do botao.
void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);
  pinMode(10,INPUT );
  pinMode(9,INPUT);
  pinMode(8,INPUT);
  pinMode(7,INPUT);
  pinMode(6,INPUT);
  pinMode(5,INPUT);
  pinMode(4,INPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   if(digitalRead(13) == HIGH){ digitalWrite(13, HIGH);
      tone(2, 2640, 100); delay(50);
    }
     if(digitalRead(10) == HIGH){digitalWrite(10, HIGH);
      tone(2, 2970, 100); delay(50);
    }
     if(digitalRead(9) == HIGH){
      tone(2, 3300, 100); delay(50);
    }
     if(digitalRead(8) == HIGH){
      tone(2, 3520, 100); delay(50);
    }
     if(digitalRead(7) == HIGH){
      tone(2,  3960, 100); delay(50);
    }
     if(digitalRead(6) == HIGH){
      tone(2, 4400, 100); delay(50);
    }
     if(digitalRead(5) == HIGH){
      tone(2, 4950, 100); delay(50);
    }
     if(digitalRead(4) == HIGH){
      tone(2, 5050, 100); delay(50);
    }
}
