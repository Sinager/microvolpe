/*
codice per microvolpe
IZ0MJE 2023 - GNU/GPL
*/

const int frqTono = 700;
const int pinTx = 2; // pin a cui collegare tx del modulo RF

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pinTx, OUTPUT);
}

void linea(){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  tone(pinTx,frqTono);
  delay(600);                       // wait
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  noTone(pinTx);
  delay(200);                       // wait
  }

void punto(){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  tone(pinTx,frqTono);
  delay(200);                       // wait
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  noTone(pinTx);
  delay(200);                       // wait
  }

void tonoLungo(){
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  tone(pinTx,frqTono);
  delay(2000);                       // wait
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  noTone(pinTx);
  delay(200);                       // wait
  }

// the loop function runs over and over again forever
void loop() {
  linea();
  linea();
  linea();
  tonoLungo();
  delay(1000);
}
