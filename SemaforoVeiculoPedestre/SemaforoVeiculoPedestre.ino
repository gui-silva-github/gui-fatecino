int REDV = 13;
int YELLOW = 12;
int GREENV = 8;
int REDP = 7;
int GREENP = 4;

void setup(){
  pinMode(REDV, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREENV, OUTPUT);
  pinMode(REDP, OUTPUT);
  pinMode(GREENP, OUTPUT);
}

void loop(){
  digitalWrite(REDV, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREENV, LOW);
  digitalWrite(REDP, LOW);
  digitalWrite(GREENP, HIGH);
  delay(10000);
  
  digitalWrite(GREENV, HIGH);
  digitalWrite(REDV, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(REDP, HIGH);
  digitalWrite(GREENP, LOW);
  delay(10000);
  
  digitalWrite(YELLOW, HIGH);
  digitalWrite(GREENV, LOW);
  digitalWrite(REDV, LOW);
  digitalWrite(REDP, HIGH);
  digitalWrite(GREENP, LOW);
  delay(2000);
}