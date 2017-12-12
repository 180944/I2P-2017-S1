int a = 2;
int b = 3;
int c = 4;
int d = 5;
int g = 6;
int f = 7;
int e = 8;
int button = 0;
int a2 = 13;
int b2 = 12;
int c2 = 11;
int d2 = A0;
int g2 = A1;
int f2 = A2;
int e2 = A3;
int piezoPin = A4;


void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  pinMode(a2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(e2, OUTPUT);
  pinMode(f2, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(piezoPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  button = digitalRead(10);
  Serial.println(button);
  if (button == HIGH)
  {
    for (int i = 24; i >= 0; i--)
    {
      displayDigit(i);
      delay(1000);
      turnoff();
    }
  }
}
void turnoff() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(a2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);

}
void displayDigit(int num)
{
  if (num == 0) {
    int i;
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
    analogWrite(piezoPin, 10);
    delay(20);
    analogWrite(piezoPin, 0);
    delay(40);
         }

  if (num == 1)
  {
    digitalWrite(c, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
  }

  if (num == 2)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
  }

  if (num == 3)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
  }

  if (num == 4)
  {
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
  }

  if (num == 5)
  {
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
  }

  if (num == 6)
  {
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
  }

  if (num == 7)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
  }

  if (num == 8)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
  }

  if (num == 9)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(f2, HIGH);
  }

  if (num == 10)
  {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
  }

  if (num == 11)
  {
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(b, HIGH);
  }

  if (num == 12) {
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(d, HIGH);
  }

  if (num == 13) {
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(g, HIGH);
  }

  if (num == 14) {
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
  }

  if (num == 15) {
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
  }

  if (num == 16) {
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(g, HIGH);
  }

  if (num == 17) {
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
  }

  if (num == 18) {
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  if (num == 19) {
    digitalWrite(c2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }

  if (num == 20) {
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(g2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
  }

  if (num == 21) {
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(g2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(b, HIGH);
  }

  if (num == 22) {
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(g2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(d, HIGH);
  }

  if (num == 23) {
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(g2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(g, HIGH);
  }

  if (num == 24) {
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(g2, HIGH);
    digitalWrite(e2, HIGH);
    digitalWrite(d2, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
   }
   if (num == 0) { //if time arrive to zero the buzzer play and display zero
      int i;
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      for (i = 0; i < 10; i++) {
        analogWrite(piezoPin, 1000);
        delay(100);
        digitalWrite(piezoPin, LOW);
        delay(100);
       }
   }
 }  
 

