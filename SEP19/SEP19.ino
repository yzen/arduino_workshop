int led = 13;
int sensor = A0;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  int sensorValue = analogRead(sensor);
  int val = 10 * sensorValue / 255;
  digitalWrite(led, HIGH);
  delay(10 - val);
  digitalWrite(led, LOW);
  delay(val);
}
