int pot = 0;
int saida = 0;

void setup() {
  pinMode(5, OUTPUT);
}

void loop() {
  pot = analogRead(A0);
  saida = pot * 0.249267;
  analogWrite(5, saida);
}
