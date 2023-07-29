#define LEDPIN 11
#define DES 0
#define ASS 1

int idx = 0;
int flag = ASS;


void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(flag == ASS) // asscending flag == true
  {
    analogWrite(LEDPIN, idx);
    idx++;
    delay(10);
  }
  if(idx >=255)
    {
      flag = DES;
    }
  if(flag == DES) // descending flag == true
  {
    analogWrite(LEDPIN, idx);
    idx--;
    delay(10);

  }
      if(idx <= 0)
   {
       flag = ASS;
   }
    Serial.println(idx);
}
