#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();

// SET THE PINS FOR THE LIGHT SENSORS.
#define PhotoTransistor 36
#define ALS_PT19 15

void setup() {
  // SET UP THE DISPLAY.
  tft.init();
  tft.fillScreen(TFT_BLACK);

  // THIS IS THE TEXT THAT DOESN'T CHANGE, SO I ONLY WRITE IT ONCE.
  // drawString(const char *string, int32_t x, int32_t y, uint8_t font);
  // drawRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color);
  tft.drawString("Photo Transistor", 0, 0, 2);
  tft.drawString("analogRead:", 0, 15, 2);
  tft.drawString("Voltage:", 0, 30, 2);
  tft.drawRect(1, 50, 133, 19, TFT_WHITE);

  tft.drawString("ALS-PT19", 0, 120, 2);
  tft.drawString("analogRead:", 0, 135, 2);
  tft.drawString("Voltage:", 0, 150, 2);
  tft.drawRect(1, 170, 133, 19, TFT_WHITE);
}

void loop() {
  // ANALOG READ THE LIGHT SENSORS.
  int phtrAnalogValue = analogRead(PhotoTransistor);
  int alsAnalogValue = analogRead(ALS_PT19);

  // CONVERT THE ANALOG READ TO A VOLTAGE.
  float phtrVoltage = (3.3 / 4095.0) * phtrAnalogValue;
  float alsVoltage = (3.3 / 4095.0) * alsAnalogValue;

  // HOW THE DISPLAY SHOULD LOOK.
  /*
     Photo Transistor
     analogRead: 2047
     Voltage: 1.6
     █████____|
  */

  // THIS IS THE DATA THAT CHANGES, SO BLANK IT OUT FIRST AND THEN WRITE THE NEW DATA.
  // fillRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color);
  tft.drawString("      ", 75, 15, 2);
  tft.drawNumber(phtrAnalogValue, 75, 15, 2);
  tft.drawString("       ", 53, 30, 2);
  tft.drawFloat(phtrVoltage, 1, 53, 30, 2);
  tft.fillRect(3, 52, 129, 15, TFT_BLACK);
  tft.fillRect(3, 52, phtrAnalogValue / 31.7 , 15, TFT_WHITE);  // 129 max to fit in the rectangle
  /*
     ALS-PT19
     analogRead: 2047
     Voltage: 1.6
     █████_____|
  */
  tft.drawString("      ", 75, 135, 2);
  tft.drawNumber(alsAnalogValue, 75, 135, 2);
  tft.drawString("       ", 53, 150, 2);
  tft.drawFloat(alsVoltage, 1, 53, 150, 2);
  tft.fillRect(3, 172, 129, 15, TFT_BLACK);
  tft.fillRect(3, 172, alsAnalogValue / 31.7 , 15, TFT_WHITE);  // 129 max to fit in the rectangle

  delay(100);
}
