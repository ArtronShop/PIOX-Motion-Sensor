
#define LED_PIN 0

// Config PIR
#define PIR_PIN 1

// Config delay
int delay_t = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  
}

void loop() {
  if (digitalRead(PIR_PIN) == LOW) return;

  //tone(6, 1000);
  digitalWrite(LED_PIN, HIGH);
  long start = 0;
  while(start <= delay_t) {
    if (digitalRead(PIR_PIN) == HIGH) {
      while(digitalRead(PIR_PIN) == HIGH) ;
      start = 0;
    }
    delay(1);
    start++;
  }
  digitalWrite(LED_PIN, LOW);
  //noTone(6);
  
  //delay(100);
}
