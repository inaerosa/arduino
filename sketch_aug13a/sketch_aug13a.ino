int vermelho = 6;
int amarelo = 7;
int verde = 8;

int cruz_vermelho = 5;
int cruz_amarelo = 4;
int cruz_verde = 3;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(verde, OUTPUT); //verde
  pinMode(amarelo, OUTPUT); //amarelo
  pinMode(vermelho, OUTPUT); //vermelho
  pinMode(cruz_vermelho, OUTPUT);
  pinMode(cruz_amarelo, OUTPUT);
  pinMode(cruz_verde, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);// turn the LED on (HIGH is the voltage level)
  digitalWrite(vermelho, LOW);
  digitalWrite(cruz_vermelho, HIGH);
  digitalWrite(cruz_amarelo, LOW);
  digitalWrite(cruz_verde, LOW);
  delay(3000);                       // wait for a second
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);// turn the LED off by making the voltage LOW
  digitalWrite(vermelho, LOW);
  digitalWrite(cruz_vermelho, HIGH);
  digitalWrite(cruz_amarelo, LOW);
  digitalWrite(cruz_verde, LOW);
  delay(1000);                       // wait for a second
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  digitalWrite(cruz_vermelho, LOW);
  digitalWrite(cruz_amarelo, LOW);
  digitalWrite(cruz_verde, HIGH);
  delay(3000);                       // wait for a second
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);// turn the LED off by making the voltage LOW
  digitalWrite(vermelho, HIGH);
  digitalWrite(cruz_vermelho, LOW);
  digitalWrite(cruz_amarelo, HIGH);
  digitalWrite(cruz_verde, LOW);
  delay(1000);
}
