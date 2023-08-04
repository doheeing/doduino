void setup() 
{
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:

 if (digitalRead(3)==HIGH)
 {
    Serial.println(1);
    digitalWrite(13, HIGH);
 }
 else
 {
    Serial.println(0);
    digitalWrite(13, LOW);
 }
}
