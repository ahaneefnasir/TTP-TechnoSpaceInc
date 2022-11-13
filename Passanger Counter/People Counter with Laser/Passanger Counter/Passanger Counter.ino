const int measure = A0;
int val = 0;
int counter = 0;

void setup() {
  Serial.begin(9000);
  Serial.println("Passanger Counter System");
  Serial.println("------------------------------");
  Serial.println("");
  delay(500);
}

void loop() {
  val = analogRead(measure);

  if (val <= 900){
    Serial.println(val);
    counter = counter + 1;
    Serial.print("Number of passangers boarded:");
    Serial.println(counter);
    val = analogRead(measure);
    while (val <= 900) {
      counter = counter;
      val = analogRead(measure);
      delay(600);
    }
 }

  else{
    counter = counter;
    delay(100);
  }
}
