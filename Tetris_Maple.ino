#include "FastLED.h"

#define DATA_PIN 7
#define MATRIX_X 16
#define MATRIX_Y 16
#define NUM_LEDS MATRIX_X * MATRIX_Y

CRGB leds[NUM_LEDS];

void setup() 
{
  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() 
{
  for (int i = 0; i < NUM_LEDS; i++)
  {
     leds[i] = CRGB::Red; 
  }
  
  FastLED.show();
  delay(500);

  for (int i = 0; i < NUM_LEDS; i++)
  {
     leds[i] = CRGB::Black; 
  }

  FastLED.show();
  delay(500);
}
