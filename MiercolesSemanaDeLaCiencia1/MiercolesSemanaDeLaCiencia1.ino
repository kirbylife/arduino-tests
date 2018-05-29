int estado=0;
void setup() {
  Serial.begin(9600);
  pinMode(8,INPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  //digitalWrite(4,HIGH);
  estado=digitalRead(8);
  //Serial.write(estado==HIGH);
  digitalWrite(4,estado);
  /*
  if(estado==HIGH){
    digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(4,LOW);
  }
  */
}
