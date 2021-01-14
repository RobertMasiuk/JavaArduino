const int ledPin =  LED_BUILTIN;
int ledState = LOW;   
void setup() {
 
  Serial.begin(9600);
  Serial.setTimeout(50);
  pinMode(ledPin, OUTPUT);
  ledState = LOW;
}

void loop() {
  String text = Serial.readString();
  if(text == "test"){
     ledState = HIGH;
  }

}
