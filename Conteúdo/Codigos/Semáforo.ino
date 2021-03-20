void setup() {
  pinMode(3, OUTPUT);//azul
  pinMode(4, OUTPUT);//amarelo
  pinMode(5, OUTPUT);//vermelho
}

void loop(){
  digitalWrite(3, HIGH);
  delay(5000);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(1500);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(4000);
  digitalWrite(5, LOW);
  
}
