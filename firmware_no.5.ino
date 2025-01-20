//duty cycle 50% => value = 127
int value = 127;

void setup() {
  pinMode(3, OUTPUT); //pin 3 sebagai output
  pinMode(11, OUTPUT); //pin 11 sebagai output
}

void loop() {
  //PWM manual pada pin 11
  for (int i = 0; i < 255; i++) {
    if (i < value) {
      digitalWrite(11, HIGH); //pin 11 naik
    } else {
      digitalWrite(11, LOW); //pin 11 datar
    }
    delayMicroseconds(50); // Menunggu 50 mikrodetik untuk satu siklus
  }
  // pin 3 selalu datar
  digitalWrite(3, LOW);

  delay(10); //tunggu bentar
}
