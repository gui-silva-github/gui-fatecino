int led = 13;
int pot = A1;
int valor = 0;

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  valor = analogRead(pot);
  digitalWrite(led, HIGH);
  delay(valor);
  digitalWrite(led, LOW);
  delay(valor);
}