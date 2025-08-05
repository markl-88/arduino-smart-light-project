int ledPin = 9;
int ldrPin = A0;
int pirPin = 2;
int threshold = 500; // Adjust based on light level

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(ldrPin);
  int motion = digitalRead(pirPin);

  Serial.println("Light: " + String(lightLevel) + " Motion: " + String(motion));

  if (lightLevel < threshold || motion == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}