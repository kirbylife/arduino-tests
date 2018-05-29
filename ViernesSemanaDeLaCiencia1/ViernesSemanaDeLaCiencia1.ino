const int led = 3;
int pot;

void setup() {
}

void loop() {
  pot=map(analogRead(0),0,1023,0,255);
  analogWrite(led,pot);
}
