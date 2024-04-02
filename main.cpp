#include <Arduino.h>
#include <Bounce2.h>
//#include <FastLED.h>

#define numOfButtons 8

Bounce debouncers[numOfButtons];

byte buttonPins[numOfButtons] = {0, 4, 16, 17, 5, 18, 19, 21};
byte physicalButtons[numOfButtons] = {1, 2, 3, 4, 5, 6, 7, 8};

void setup()
{
    for (byte currentPinIndex = 0; currentPinIndex < numOfButtons; currentPinIndex++)
    {
        pinMode(buttonPins[currentPinIndex], INPUT_PULLUP);

        debouncers[currentPinIndex] = Bounce();
        debouncers[currentPinIndex].attach(buttonPins[currentPinIndex]);
        debouncers[currentPinIndex].interval(5);
    }

    Serial.begin(115200);
}

void loop()
{
    bool sendReport = false;

    for (byte currentIndex = 0; currentIndex < numOfButtons; currentIndex++)
    {
        debouncers[currentIndex].update();

        if (debouncers[currentIndex].fell())
        {
            Serial.write(physicalButtons[currentIndex]);
            sendReport = true;
            // Add code to handle LED feedback if needed
        }
        else if (debouncers[currentIndex].rose())
        {
            Serial.write(physicalButtons[currentIndex] | 0x80); // Release event
            sendReport = true;
            // Add code to handle LED feedback if needed
        }
    }

    if (sendReport)
    {
        delay(5); // Add a small delay to ensure that the data is sent properly
    }
}
