//Laser
//son 3 puertos, el primero(parte - es a donde se va a dirigir al numero
//el puerto de inmedio se dirigira a los 5v
//el ultimo es el gnd
const int pin=2;

void setup() {
  pinMode(pin, OUTPUT); //definir pin como salida

}

void loop() {
  digitalWrite(pin,HIGH); //se pone el pin en HIGH
  delay(150);   //Espera 5 segundos 
  digitalWrite(pin,LOW);  //se pone el pin en LOW
  delay(150); //espera 20 segundos

}
