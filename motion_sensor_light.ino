const int LDR_PIN = A0;   // Light sensor pin
const int PIR_PIN = 2;    // Motion sensor pin
const int RELAY_PIN = 8;  // Relay / LED pin

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(LDR_PIN);
  int motion = digitalRead(PIR_PIN);

  // Debugging info
  Serial.print("Light: ");
  Serial.print(lightLevel);
  Serial.print(" | Motion: ");
  Serial.println(motion);

  if (lightLevel < 500 && motion == HIGH) {
    digitalWrite(RELAY_PIN, HIGH); // Turn on light
  } else {
    digitalWrite(RELAY_PIN, LOW);  // Turn off light
  }

  delay(200); // small delay for stability
}