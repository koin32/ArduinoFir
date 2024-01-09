#define LED_PIN D5
#define LED_NUM 64
#define snowTime 1000

#include "FastLED.h"
#include "GyverTimer.h"

GTimer myTimer(MS);
CRGB leds[LED_NUM];
int i = 0;

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, LED_NUM);
  FastLED.setBrightness(40);
  myTimer.setInterval(1000);
}

void loop() {
snow();
}

void SnowFalling(uint8_t x, uint8_t y, uint8_t xx, uint8_t yy){
      FastLED.clear();
      fir();
      leds[matrix(x, y)].setRGB(255, 255, 255);
      leds[matrix(xx, yy)].setRGB(255, 255, 255);
      FastLED.show();
    }

void snow(){
  if (myTimer.isReady()) {
    switch (i)
    {
      case 0:
        SnowFalling(5, 7, 2, 7);
        i++;
      break;
      
      case 1:
        SnowFalling(6, 6, 1, 6);
        i++;
      break;
      
      case 2:
        SnowFalling(5, 5, 0, 5);
        i++;
      break;
      
      case 3:
        SnowFalling(4, 4, 1, 4);
        i++;
      break;
      
      case 4:
        SnowFalling(3, 3, 2, 3);
        i++;
      break;
      
      case 5:
        SnowFalling(4, 2, 1, 2);
        i++;
      break;
      
      case 6:
        SnowFalling(3, 1, 2, 1);
        i++;
      break;
      
      case 7:
        SnowFalling(0, 0, 0, 0);      
        i = 0;
      break;
      }
    }
}



//////////////////////////////////

int matrix(uint8_t x, uint8_t y){
    if((x == 0) & (y == 0)){
      return 0;
    }
    else if((x == 1) & (y == 0)){
      return 1;
    }
    else if((x == 2) & (y == 0)){
      return 2;
    }
    else if((x == 3) & (y == 0)){
      return 3;
    }
    else if((x == 4) & (y == 0)){
      return 4;
    }
    else if((x == 5) & (y == 0)){
      return 5;
    }
    else if((x == 6) & (y == 0)){
      return 6;
    }
    else if((x == 7) & (y == 0)){
      return 7;
    }

    
    else if((x == 0) & (y == 1)){
      return 15;
    }
    else if((x == 1) & (y == 1)){
      return 14;
    }
    else if((x == 2) & (y == 1)){
      return 13;
    }
    else if((x == 3) & (y == 1)){
      return 12;
    }
    else if((x == 4) & (y == 1)){
      return 11;
    }
    else if((x == 5) & (y == 1)){
      return 10;
    }
    else if((x == 6) & (y == 1)){
      return 9;
    }
    else if((x == 7) & (y == 1)){
      return 8;
    }

    
    else if((x == 0) & (y == 2)){
      return 16;
      }

    else if((x == 1) & (y == 2)){
      return 17;
    }
    else if((x == 2) & (y == 2)){
      return 18;
    }
    else if((x == 3) & (y == 2)){
      return 19;
    }
    else if((x == 4) & (y == 2)){
      return 20;
    }
    else if((x == 5) & (y == 2)){
      return 21;
    }
    else if((x == 6) & (y == 2)){
      return 22;
    }
    else if((x == 7) & (y == 2)){
      return 23;
    }

    
    else if((x == 0) & (y == 3)){
      return 31;
      }

    else if((x == 1) & (y == 3)){
      return 30;
    }
    else if((x == 2) & (y == 3)){
      return 29;
    }
    else if((x == 3) & (y == 3)){
      return 28;
    }
    else if((x == 4) & (y == 3)){
      return 27;
    }
    else if((x == 5) & (y == 3)){
      return 26;
    }
    else if((x == 6) & (y == 3)){
      return 25;
    }
    else if((x == 7) & (y == 3)){
      return 24;
    }

    
    else if((x == 0) & (y == 4)){
      return 32;
    }
    else if((x == 1) & (y == 4)){
      return 33;
    }
    else if((x == 2) & (y == 4)){
      return 34;
    }
    else if((x == 3) & (y == 4)){
      return 35;
    }
    else if((x == 4) & (y == 4)){
      return 36;
    }
    else if((x == 5) & (y == 4)){
      return 37;
    }
    else if((x == 6) & (y == 4)){
      return 38;
    }
    else if((x == 7) & (y == 4)){
      return 39;
    }


    else if((x == 0) & (y == 5)){
      return 47;
    }
    else if((x == 1) & (y == 5)){
      return 46;
    }
    else if((x == 2) & (y == 5)){
      return 45;
    }
    else if((x == 3) & (y == 5)){
      return 44;
    }
    else if((x == 4) & (y == 5)){
      return 43;
    }
    else if((x == 5) & (y == 5)){
      return 42;
    }
    else if((x == 6) & (y == 5)){
      return 41;
    }
    else if((x == 7) & (y == 5)){
      return 40;
    }

    
    else if((x == 0) & (y == 6)){
      return 48;
    }
    else if((x == 1) & (y == 6)){
      return 49;
    }
    else if((x == 2) & (y == 6)){
      return 50;
    }
    else if((x == 3) & (y == 6)){
      return 51;
    }
    else if((x == 4) & (y == 6)){
      return 52;
    }
    else if((x == 5) & (y == 6)){
      return 53;
    }
    else if((x == 6) & (y == 6)){
      return 54;
    }
    else if((x == 7) & (y == 6)){
      return 55;
    }


    else if((x == 0) & (y == 7)){
      return 63;
    }
    else if((x == 1) & (y == 7)){
      return 62;
    }
    else if((x == 2) & (y == 7)){
      return 61;
    }
    else if((x == 3) & (y == 7)){
      return 60;
    }
    else if((x == 4) & (y == 7)){
      return 59;
    }
    else if((x == 5) & (y == 7)){
      return 58;
    }
    else if((x == 6) & (y == 7)){
      return 57;
    }
    else if((x == 7) & (y == 7)){
      return 56;
    }

return 0;
}

void fir(){
leds[4].setRGB(50, 20, 0);
leds[11].setRGB(50, 20, 0);
leds[17].setRGB(0, 68, 0);
leds[18].setRGB(0, 68, 0);
leds[19].setRGB(0, 68, 0);
leds[20].setRGB(50, 20, 0);
leds[21].setRGB(0, 68, 0);
leds[22].setRGB(0, 68, 0);
leds[23].setRGB(0, 68, 0);
leds[25].setRGB(0, 68, 0);
leds[26].setRGB(0, 68, 0);
leds[27].setRGB(0, 68, 0);
leds[28].setRGB(0, 68, 0);
leds[29].setRGB(0, 68, 0);
leds[35].setRGB(0, 68, 0);
leds[36].setRGB(0, 68, 0);
leds[37].setRGB(0, 68, 0);
leds[41].setRGB(0, 68, 0);
leds[42].setRGB(0, 68, 0);
leds[43].setRGB(0, 68, 0);
leds[44].setRGB(0, 68, 0);
leds[45].setRGB(0, 68, 0);
leds[51].setRGB(0, 68, 0);
leds[52].setRGB(0, 68, 0);
leds[53].setRGB(0, 68, 0);
leds[59].setRGB(0, 68, 0);
for(uint8_t i; i < 8; i++){
  leds[matrix(i, 0)].setRGB(255, 255, 255);
}
FastLED.show();
}
