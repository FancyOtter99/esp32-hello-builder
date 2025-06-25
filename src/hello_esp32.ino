void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Hello from ESP32-S3 v1!");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Serial.println("Blinking...");
  delay(100);
}
