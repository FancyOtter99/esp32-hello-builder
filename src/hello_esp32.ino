void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Hello from ESP32-S3 v1!");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  Serial.println("Blinking...");
}
