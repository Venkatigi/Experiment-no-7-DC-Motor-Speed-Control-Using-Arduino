#define m1 10
#define m2 11
#define m4 8
#define m5 9

#define m3 13
int buttonState = 0;
void setup()
{
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, INPUT);
  pinMode(m4, OUTPUT);
  pinMode(m5, OUTPUT);
  
}

void loop()
{
  buttonState = digitalRead(13);
  if (buttonState == HIGH) {
     digitalWrite(m1, HIGH);
 	 digitalWrite(m2, LOW);
     digitalWrite(m4, HIGH);
 	 digitalWrite(m5, LOW);
  }else if (buttonState == LOW){
    digitalWrite(m1, LOW);
 	 digitalWrite(m2, LOW);
     digitalWrite(m4, LOW);
 	 digitalWrite(m5, LOW);
  }
  else{
      delay(1000);

  }
  
  
}