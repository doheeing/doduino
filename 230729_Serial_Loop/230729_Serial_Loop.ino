int ledPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int idx = 0; idx < 255; idx++)
  {
    analogWrite(ledPin, idx);
    delay(100);
    Serial.println(idx);
  }
  for(int idx = 255; idx > 0; idx--)
 {
    analogWrite(ledPin, idx);
    delay(100);
    Serial.println(idx);
 }
}
