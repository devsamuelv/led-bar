#include <Arduino.h>
#include <FastLED.h>

#define NUM_LEDS 4
#define DATA_PIN 6
CRGB leds[NUM_LEDS];

void setup()
{
    FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS);
}

void loop()
{
    // put your main code here, to run repeatedly:
}
