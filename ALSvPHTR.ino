#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();

// SET THE PINS FOR THE LIGHT SENSORS.
#define PhotoTransistor 36  // Maybe?
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
  tft.drawRect(1, 45, 133, 19, TFT_WHITE);

  tft.drawString("ALS-PT19", 0, 120, 2);
  tft.drawString("analogRead:", 0, 135, 2);
  tft.drawString("Voltage:", 0, 150, 2);
  tft.drawRect(1, 165, 133, 19, TFT_WHITE);
}

void loop() {
  // ANALOG READ THE LIGHT SENSORS.
  int phtrAnalogValue = analogRead(PhotoTransistor);
  int alsAnalogValue = analogRead(ALS_PT19);

  // CONVERT THE ANALOG READ TO A VOLTAGE.
  float phtrVoltage = (3.3 / 4059.0) * phtrAnalogValue;
  float alsVoltage = (3.3 / 4059.0) * alsAnalogValue;

  // HOW THE DISPLAY SHOULD LOOK.
  /*
     Photo Transistor
     analogRead: 0000
     Voltage: 0.0
     █████____|
  */

  // THIS IS THE DATA THAT CHANGES, SO BLANK IT OUT FIRST AND THEN WRITE THE NEW DATA.
  // fillRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color);
  tft.drawString("      ", 50, 15, 2);  // THIS STILL NEEDS ADJUSTING ON THE X
  tft.drawNumber(phtrAnalogValue, 50, 15, 2);  // THIS STILL NEEDS ADJUSTING ON THE X
  tft.drawString("       ", 50, 30, 2);  // THIS STILL NEEDS ADJUSTING ON THE X
  tft.drawFloat(phtrVoltage, 1, 50, 30, 2);  // THIS STILL NEEDS ADJUSTING ON THE X
  tft.fillRect(3, 47, 129, 15, TFT_BLACK);
  tft.fillRect(3, 47, phtrAnalogValue / 31.7 , 15, TFT_WHITE);  // 129 max to fit in the rectangle
  /*
     ALS-PT19
     analogRead: 0000
     Voltage: 0.0
     █████_____|
  */
  tft.drawString("      ", 50, 135, 2);  // THIS STILL NEEDS ADJUSTING ON THE X
  tft.drawNumber(alsAnalogValue, 50, 135, 2);  // THIS STILL NEEDS ADJUSTING ON THE X
  tft.drawString("       ", 50, 150, 2);  // THIS STILL NEEDS ADJUSTING ON THE X
  tft.drawFloat(alsVoltage, 1, 50, 150, 2);  // THIS STILL NEEDS ADJUSTING ON THE X
  tft.fillRect(3, 167, 129, 15, TFT_BLACK);
  tft.fillRect(3, 167, alsAnalogValue / 31.7 , 15, TFT_WHITE);  // 129 max to fit in the rectangle
}
