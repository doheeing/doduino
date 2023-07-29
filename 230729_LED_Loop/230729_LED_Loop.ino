int ledPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin ,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // for(시작, 조건, 행동)
  //변수를 0부터 시작해서 255까지 계속 1씩 증가시키자
  int idx = 0;

  for(idx = 0; idx < 255; idx++)
  {
      analogWrite(ledPin, idx);
      delay(5);
  }
  for(idx = 255; idx > 0; idx--)
  {
      analogWrite(ledPin, idx);
      delay(5);
    }
}
