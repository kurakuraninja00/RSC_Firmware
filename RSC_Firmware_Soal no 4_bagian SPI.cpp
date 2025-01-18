#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

// Pin SPI untuk Arduino
#define TFT_CS    10
#define TFT_RST   9
#define TFT_DC    8

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  Serial.begin(9600);
  SPI.begin();  // Inisialisasi komunikasi SPI
  tft.begin();  // Inisialisasi layar LCD SPI
  tft.setRotation(0);  // Orientasi layar untuk landscape normal
  tft.fillScreen(ILI9341_WHITE);  // Mengisi layar dengan warna putih
  tft.setTextColor(ILI9341_BLACK);  // Set warna teks
  tft.setTextSize(2);  // Ukuran teks

  tft.setCursor(50, 50);  // Posisi teks pada layar
  tft.println("Ubi Cilembu");
  tft.println("Khas JatiNewYork");
  tft.println("Hubungi WA: 1999199911");
}

