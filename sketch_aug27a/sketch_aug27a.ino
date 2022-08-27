void setup() {
  // put your setup code here, to run once:

}

void loop() {

  for (int i = 0; i <= 255; i++){
      analogWrite(5, i);
      delay(5);
   }

   
  for (int i = 255; i >= 0; i--){
      analogWrite(5, i);
      delay(5);
   }
}
