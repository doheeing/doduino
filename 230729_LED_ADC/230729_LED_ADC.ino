void setup() {
  // put your setup code here, to run once:

  pinMode(11, OUTPUT); // 11번 PIN을 출력으로 설정
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(11, 1); // 아날로그 출력으로 11번 PIN을 100value로 출력

}
