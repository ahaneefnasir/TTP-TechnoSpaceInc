const int measure = A0;
// value returned by analogRead
int val = 0;

// pin to which the seat sensor LED is connected
int pinLed = 12;

void setup() {
  // Initialization of the Serial Monitor
  Serial.begin(9600);
  // ledPin is the pin to which the LED of the seat sensor is connected
  pinMode(pinLed, OUTPUT);
  // pinLedAlert is the pin to which the LED that signals the person's session is connected
  digitalWrite(pinLed, HIGH);
  // Startup message
  Serial.println("Seat detection system");
  Serial.println("-----------------------------");
  Serial.println(""); 
  delay(1000);
}

void loop() {
  // analogRead will read the value on A0 returning a value between 0 and 1023
  val = analogRead(measure);
  // the control value in the if must be tested in function
  // construction needs (e.g. the length of the pipe)
  // if true the person is seated
  if (val >= 100) {
    Serial.println("Person NOT seated");  
    Serial.print("Value read by the sensor = ");          
    Serial.println(val);                                  
    Serial.println("");                                   
    delay(1000);                                          
  }
  else{
    Serial.println("Person IS seated");      
    Serial.print("Value read by the sensor = ");          
    Serial.println(val);                                  
    Serial.println("");                                   
    delay(1000);                                          
  }
}