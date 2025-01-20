const int pwmPin = 9;    // Pin digital untuk keluaran PWM
const int period = 1000; // Periode PWM dalam mikrodetik (misalnya 2000 us = 2 ms, atau 500 Hz)

void setup() {
  // put your setup code here, to run once:
  pinMode(pwmPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int onTime = period / 2;  // Waktu aktif (HIGH) = 50% duty cycle
  int offTime = period / 2; // Waktu nonaktif (LOW) = 50% duty cycle

  digitalWrite(pwmPin, HIGH); // Aktifkan pin
  delayMicroseconds(onTime);  // Tahan selama onTime

  digitalWrite(pwmPin, LOW);  // Nonaktifkan pin
  delayMicroseconds(offTime); // Tahan selama offTime
}
