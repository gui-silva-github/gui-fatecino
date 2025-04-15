int RED = 13;
int YELLOW = 12;
int GREEN = 8;

void setup(){
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop(){
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
  delay(7000);
  
  digitalWrite(GREEN, HIGH);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  delay(7000);
  
  digitalWrite(YELLOW, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(RED, LOW);
  delay(3000);
}
