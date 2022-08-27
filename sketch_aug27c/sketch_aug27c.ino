int v = LOW;
int red = 7;
int yellow = 6;
int green = 5;
String state = "RED"; 

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop() {
  v = digitalRead(10);
  if(v== HIGH || state=="RED") {
    digitalWrite(green, HIGH);
    delay(3000);
    digitalWrite(green, LOW);
    state = "GREEN";
  } else if (v == LOW && state == "GREEN") {
    digitalWrite(yellow, HIGH);
    delay(6000);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(3000);
    digitalWrite(red, LOW);
    state = "RED";
    
    
  }
}
