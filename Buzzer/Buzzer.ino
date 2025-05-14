int buzzer = 8;

void setup(){
  pinMode(buzzer, OUTPUT);
}

void loop(){
  tone(buzzer, 1200);
  delay(500);
  noTone(buzzer);
  delay(500);
}
