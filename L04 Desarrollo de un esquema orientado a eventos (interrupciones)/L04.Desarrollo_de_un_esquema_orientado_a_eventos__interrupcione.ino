const byte ledPin = 13;
const byte ledPin2 = 12;
const byte ledPin3 = 11;
const byte ledPin4 = 10;
const byte ledPin5 = 9;
const byte ledPin6 = 8;
const byte interruptPin = 2;
const byte interruptPin2 = 3;
const byte interruptPin3 = 18;
const byte interruptPin4 = 19;
const byte interruptPin5 = 20;
const byte interruptPin6 = 21;
volatile byte state = LOW;
volatile byte state2 = LOW;
volatile byte state3 = LOW;
volatile byte state4 = LOW;
volatile byte state5 = LOW;
volatile byte state6 = LOW;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
  pinMode (ledPin4, OUTPUT);
  pinMode (ledPin5, OUTPUT);
  pinMode (ledPin6, OUTPUT);
  pinMode (interruptPin, INPUT_PULLUP);
  pinMode(interruptPin2, INPUT_PULLUP);
  pinMode(interruptPin3, INPUT_PULLUP);
  pinMode(interruptPin4, INPUT_PULLUP);
  pinMode(interruptPin5, INPUT_PULLUP);
  pinMode(interruptPin6, INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(interruptPin),uno , CHANGE);
 attachInterrupt(digitalPinToInterrupt(interruptPin2),dos, CHANGE);
 attachInterrupt(digitalPinToInterrupt(interruptPin3),tres, CHANGE); 
  attachInterrupt(digitalPinToInterrupt(interruptPin4),cuatro, CHANGE);
   attachInterrupt(digitalPinToInterrupt(interruptPin5),cinco, CHANGE);
    attachInterrupt(digitalPinToInterrupt(interruptPin6),seis, CHANGE);
}

void loop() {
  digitalWrite(ledPin, state);
  digitalWrite (ledPin2, state2);
    digitalWrite (ledPin3, state3);
      digitalWrite (ledPin4, state4);
        digitalWrite (ledPin5, state5);
          digitalWrite (ledPin6, state6);
  
}

void uno() {
  state = !state;
}
void dos(){
  state2 = !state2;
}
void tres(){
  state3 = !state3;
}
void cuatro(){
  state4 = !state4;
}
void cinco(){
  state5= !state5;
}
void seis(){
  state6 = !state6;
}

