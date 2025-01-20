#include<SPI.h>
#include <Adafruit_GFX.h> //untuk grafis
#include <Adafruit_ILI9341.h> //untuk LCD ILI9341 TFT

//definisi pin SPI untuk LCD
#define TFT_CS 10 //pin chip select
#define TFT_DC 9 //pin data/command
#define TFT_RST 8 //pin reset

//inisialisasi objek LCD
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  SPI.begin(); //inisialisasi komunikasi SPI
  tft.begin(); //inisialisasi layar LCD SPI
  
  //warna background dan text
  tft.fillScreen(ILI9341_PINK); //layar pink
  tft.setTextColor(ILI9341_WHITE); //teks putih
  tft.setTextSize(2); //ukuran teks

  //tampilin teks ke layar
  tft.setCursor(10, 10); //posisi teks
  tft.println("PUlu pulu");
}

void loop() {
  // put your main code here, to run repeatedly:

}
