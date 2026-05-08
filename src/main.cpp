#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library
#include <SPI.h>

// Define pins for your microcontroller (Feather ESP32 example)
#define TFT_CS        5
#define TFT_RST       10
#define TFT_DC        6
#define TFT_BACKLIGHT -1 // Optional - connect to 3V3

// Initialize ST7789 320x172
Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup(void) {
  Serial.begin(115200);

  // Initialize the display
  tft.init(172, 320); // Init ST7789 320x172
  tft.setRotation(1); // Adjust rotation as needed

  // Fill screen with black
  tft.fillScreen(ST77XX_BLACK);

  // Draw some text
  tft.setCursor(20, 20);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(2);
  tft.println("Hello RGB ST7789P3");

  tft.setCursor(20, 40);
  tft.println("1.47 inch 172 x 320");

  // Rectangle dimensions
  int rectW = 80;
  int rectH = 50;
  int gap = 10;
  
  // Starting coordinates for the centered group
  int xStart = 30; 
  int yStart = 81;

  // Draw the 3 rectangles centered
  tft.fillRect(xStart, yStart, rectW, rectH, ST77XX_RED);
  tft.fillRect(xStart + (rectW + gap), yStart, rectW, rectH, ST77XX_GREEN);
  tft.fillRect(xStart + 2 * (rectW + gap), yStart, rectW, rectH, ST77XX_BLUE);  
}

void loop() {
  // Add animation or sensor data here
}
