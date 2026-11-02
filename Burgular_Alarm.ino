//paste into Arduino IDE and upload to your Arduino!
// C++ code

int pir = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  pir = digitalRead(2);
  Serial.println(pir);
  delay(1000); // Wait for 1000 millisecond(s)
  if (pir == 1) {
    digitalWrite(3, HIGH);
    tone(4, 523, 1000); // play tone 60 (C5 = 523 Hz)
  } else {
    digitalWrite(3, LOW);
    noTone(4);
  }
}
