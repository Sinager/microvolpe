/*
 * ----------------------------------------------------------------
 * codice per microvolpe
 * IZ0MJE 2023 - GNU/GPL
 * modificato da IU0EUF
 * ----------------------------------------------------------------
*/

// --------- I/O -----------------------------------------------------
// #define pinTx   2           // pin a cui collegare TX del modulo RF
#define pinTx   12           // pin a cui collegare TX del modulo RF
// -------------------------------------------------------------------

const int frqTono=700;
const int T1=200;
const int T3=600;
const int TL=2000;
const int BE=1000;

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pinTx, OUTPUT);
}

void manovra(int t)
{
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on (HIGH is the voltage level)
  tone(pinTx,frqTono);
  delay(t);                           // wait
  digitalWrite(LED_BUILTIN, LOW);     // turn the LED off by making the voltage LOW
  noTone(pinTx);
  delay(T1);                          // wait
}

void punto()      {  manovra(T1);  }
void linea()      {  manovra(T3);  }
void tonoLungo()  {  manovra(TL); }

                    
void loop()               // the loop function runs over and over again forever
{
  linea();
  linea();
  linea();
  delay(TL);
  tonoLungo();
  delay(BE);
}
