void setup() {
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int v = analogRead(A0);
  Serial.println(v); 
  if(v < 300) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
 }
