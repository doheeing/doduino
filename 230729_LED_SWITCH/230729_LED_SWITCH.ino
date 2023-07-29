void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);  // 2번 PIN을 입력으로 설정
  pinMode(13, OUTPUT); // 13번 PIN(LED)은 출력으로 설정
}

void loop() {
  // put your main code here, to run repeatedly:
 if (digitalRead(2)==HIGH){; // 2번 PIN 이 HIGH 이면 13번 핀 켜
      digitalWrite(13,HIGH);
  }
  if (digitalRead(2)==LOW){; // 2번 PIN 이 LOW 면 13번 핀 켜
      digitalWrite(13,LOW);
  }
}
