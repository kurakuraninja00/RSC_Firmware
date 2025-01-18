#include <Wire.h>             // Include Wire library for I2C communication
#include <LiquidCrystal_I2C.h> // Include LiquidCrystal_I2C library


//menghubungkan arduino dengan perangkat I2C (layar LCD)
//referensi: ChatGPT
//konsep: jualan Ubi

LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup() {
  lcd.begin(16, 3);     // memulai LCD dengan 16 kolom dan 2 baris
  lcd.backlight();      // menyalakan LCD backlight

void loop() {

  lcd.setCursor(0, 0);  // posisi cursor di baris pertama, kolom pertama
  lcd.print("Ubi Cilembu"); // print pesan pada LCD
  lcd.setCursor(0,1); // posisi cursor di baris kedua, kolom pertama
  lcd.print("khas JatiNewYork");
  lcd.setCursor(0,2); // posisi cursor di baris ketiga, kolom pertama
  lcd.print("Hubungi WA: 11991999199")

  delay(10000); //tampilkan selama 10 detik

  lcd.clear();
  delay(1000); //tunggu 1 detik sbelum mulai lg
}


