#define SW 3

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SW, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0) {
    uint8_t val = Serial.read();
    digitalWrite(LED_BUILTIN, val);
  }
  Serial.print(!digitalRead(SW));
  delay(10);
}
