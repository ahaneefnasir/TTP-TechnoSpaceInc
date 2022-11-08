const int measure = A0;
int val = 0;
int counter = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Passanger Counter System");
  Serial.println("------------------------------");
  Serial.println("");
  delay(500);
}

void loop() {
  val = analogRead(measure);

  if (val <= 200){
    counter = counter + 1;
    Serial.print("Number of passangers boarded:");
    Serial.println(counter);
    delay(500);
  }

  else{
    counter = counter;
    delay(100);
  }

}
