int led = 13;
int botao = 2;
int estado = 0;

void setup(){
  pinMode (led, OUTPUT);
  pinMode(botao, INPUT);
  digitalWrite(botao, HIGH);
}

void loop(){

  estado = digitalRead(botao);

  if(estado == LOW){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  
}
