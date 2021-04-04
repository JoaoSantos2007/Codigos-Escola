int red = 6, green = 9, blue = 3;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  analogWrite(red, 255);
  delay(2000);
  analogWrite(red, 0);
  delay(2000);
  analogWrite(green,255);
  delay(2000);
  analogWrite(green,0);
  delay(2000);
  analogWrite(red, 127);
  analogWrite(blue, 255);
  delay(2000);
  analogWrite(red, 0);
  analogWrite(blue, 0);
  delay(2000);
}
