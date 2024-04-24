int x = 13;
unsigned long timer1;
unsigned long timer2;
unsigned long timer3;

void setup() 
{
  Serial.begin(115200);

  pinMode(x, OUTPUT);
}

void loop() 
{
  timer1 = micros();
  //Serial.println("H" + String(timer));
  digitalWrite(x, HIGH);
  delayMicroseconds(1);

  timer2 = micros();
  //Serial.println("L" + String(timer));

  timer3 = timer2 - timer1;
  Serial.println(timer3);
  
  digitalWrite(x, LOW);
  delayMicroseconds(1);
}
