int LED = 9;
int BOTAO = 7;
int valor;

void setup(){
    pinMode(LED, OUTPUT);
    pinMode(BOTAO, INPUT);
}

void loop(){
    valor = digitalRead(BOTAO);
    digitalWrite(LED, valor);
    delay(50);
}