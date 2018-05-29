int r=2,g=4,b=7;
int btn1=8,btn2=12;

int estado1,estado2;
void setup() {
  Serial.begin(9600);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);

  digitalWrite(r,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
}

void loop() {
  estado1=digitalRead(btn1);
  if(estado1==HIGH){
    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(b,LOW);
  }
  
  estado2=digitalRead(btn2);
  if(estado2==HIGH){
    digitalWrite(r,LOW);
    digitalWrite(g,LOW);
    digitalWrite(b,HIGH);
  }
}
