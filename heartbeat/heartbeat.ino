int x = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);
  Serial.print(x);
  Serial.println(" sec have elapsed");
  digitalWrite(13, LOW);
  x += 1;
}
