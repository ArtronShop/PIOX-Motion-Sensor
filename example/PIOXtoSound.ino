#define PIOX_PIN   2
#define BUZZER_PIN 6

void setup() {
  pinMode(PIOX_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(PIOX_PIN) == HIGH) {
    tone(BUZZER_PIN, 2000);
    while(digitalRead(PIOX_PIN) == HIGH) delay(10);
    noTone(BUZZER_PIN);
  }
}
