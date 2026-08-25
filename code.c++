const int pinoLED = 10;
const int pinoBotao = 7;

void setup() {
  pinMode(pinoLED, OUTPUT);
  pinMode(pinoBotao, INPUT);
}

void loop() {
  int estadoBotao = digitalRead(pinoBotao);

  if (estadoBotao == LOW) {
    digitalWrite(pinoLED, HIGH);
  } else {
    digitalWrite(pinoLED, LOW);
  }
}
