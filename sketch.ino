
const int pirPin = 2;
const int buzzerPin = 8;
const int ledPin = 9;

bool previousMotion = false;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("PIR Smart Room Security");
  Serial.println("Initializing sensor...");

  delay(30000);

  Serial.println("SYSTEM ARMED");
}

void loop() {
  bool motionDetected = digitalRead(pirPin) == HIGH;

  digitalWrite(ledPin, motionDetected ? HIGH : LOW);
  digitalWrite(buzzerPin, motionDetected ? HIGH : LOW);

  if (motionDetected != previousMotion) {
    if (motionDetected) {
      Serial.println("ALERT: INTRUDER DETECTED!");
    } else {
      Serial.println("Room Secure - No Motion");
    }

    previousMotion = motionDetected;
  }

  delay(50);
}