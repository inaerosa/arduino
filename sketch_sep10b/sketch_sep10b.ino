void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void PararMotor1(){
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  analogWrite(9, 0);
}

void FrenteMotor1(int velocidade){
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  analogWrite(9, velocidade);
}

void ReversoMotor1(int velocidade){
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  analogWrite(9, velocidade);  
}

void PararMotor2() {
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  analogWrite(3, 0); 
}

void FrenteMotor2(int velocidade){
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  analogWrite(3, velocidade);   
}

void ReversoMotor2(int velocidade){
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  analogWrite(3, velocidade);
}

void loop() {
  FrenteMotor1(128);
  FrenteMotor2(128);
  delay(3000);
  FrenteMotor1(128);
  FrenteMotor2(64);
  delay(3000);
  ReversoMotor1(64);
  ReversoMotor1(128);
  delay(3000);
  ReversoMotor1(128);
  ReversoMotor2(128);
  delay(1000);
  PararMotor1();
  PararMotor2();
}
