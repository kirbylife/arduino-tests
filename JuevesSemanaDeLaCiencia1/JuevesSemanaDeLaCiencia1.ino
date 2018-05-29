int pines[]={2,3,4,5,6,7,8}; //Pines en donde esta conectado de la A-G del display

int pinBtn=12; //Pin donde esta conectado el boton

int cont=0; //Numero que mostrara el display
int valor; //Valor que leera el valor del boton
boolean estado=true; //Variable para saber cuando el boton esta presionado o no

int numeros[10][7]={ //Arreglo multidimensional que contiene los numeros
//a,b,c,d,e,f,g
{1,1,1,1,1,1,0},//0
{0,1,1,0,0,0,0},//1
{1,1,0,1,1,0,1},//2
{1,1,1,1,0,0,1},//3
{0,1,1,0,0,1,1},//4
{1,0,1,1,0,1,1},//5
{1,0,1,1,1,1,1},//6
{1,1,1,0,0,0,0},//7
{1,1,1,1,1,1,1},//8
{1,1,1,0,0,1,1},//9
};

void number(int orden[]){ //El metodo recibe un arreglo con el numero a mostrar en el display
  for(int c=0;c<7;c++){
    digitalWrite(pines[c],orden[c]); //Recorre el arreglo de pines y el recibido por parametro
  }
}

void setup() {
  for(int c=0;c<7;c++){
    pinMode(pines[c],OUTPUT);
  }
  pinMode(pinBtn,INPUT);
}

void loop() {
  valor=digitalRead(pinBtn); //lee el valor del boton
  if(valor==HIGH && estado){ //si esta presionado y en el ciclo anterior no lo estaba, entra
    cont=(cont+1)%10; //al contador se le suma 1 y se le saca el modulo con respecto a 10 para que el valor nunca sea mayor a 9
    estado=false; //Con esta variable se le indica que en este ciclo fue presionado el boton
  }
  else if(valor==LOW){ //si el boton se suelta, entra
    estado=true; //Se le indica que en este ciclo estaba suelto el boton
  }
  number(numeros[cont]); //Al metodo "number" se le pasa el arreglo de numeros que corresponden a "cont"
}
