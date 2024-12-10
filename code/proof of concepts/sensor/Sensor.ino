int Array[8] = {14, 27, 26, 25, 33, 32, 35, 34};
int waarde;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Waarde Sensoren: ");
  for (int i = 0; i < 8; i++) 
  {
    waarde = analogRead(Array[i]);
    Serial.print(waarde);
    Serial.print(" ");
  }
  Serial.println();
  delay(1000);
}
