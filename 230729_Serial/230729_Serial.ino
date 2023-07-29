void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Serial 통신 시작 (9600 baudrate)
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("dohee"); // Serial 출력
  delay(1000);
}
