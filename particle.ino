// This #include statement was automatically added by the Particle IDE.
#include "neopixel/neopixel.h"



#include "neopixel/neopixel.h"

#include <application.h>



/* ======================= Prototype Defs =========================== */

void colorAll(uint32_t c, uint8_t wait);


/* ======================= Spark_StrandTest.cpp ===================== */

#define PIN D6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(24, PIN, WS2812B);



int sensorPin = A0; //analog pin 0
int prox;
int pos = 0;
int led = D7;


void setup(){
  Serial.begin(9600);
  Spark.variable("val",&prox,INT);
   Spark.function("setLed", photonLed);
   pinMode(A0,INPUT);
     pinMode(led, OUTPUT);
     strip.begin();
     strip.show();
}

void loop(){
    prox = analogRead(sensorPin);
   Serial.println(prox);
  //just to slow down the output - remove if trying to catch an object passing by
  delay(1000);
  strip.show();
}


int photonLed(String posValue) {
    pos = posValue.toInt();
    Serial.println(pos);
    
    if(pos<500){
  strip.setPixelColor(0, strip.Color(0, 0, 0));      
  strip.setPixelColor(1, strip.Color(0, 0, 0));
  strip.setPixelColor(2, strip.Color(0, 0, 0));
  strip.setPixelColor(3, strip.Color(0, 0, 0));
  strip.setPixelColor(4, strip.Color(0, 0, 0));
  strip.setPixelColor(5, strip.Color(0, 0, 0)); 
  strip.setPixelColor(6, strip.Color(0, 0, 0));
  strip.setPixelColor(7, strip.Color(0, 0, 0));
  strip.setPixelColor(8, strip.Color(0, 0, 0));
  strip.setPixelColor(9, strip.Color(0, 0, 0));
  strip.setPixelColor(10, strip.Color(0, 0, 0)); 
  strip.setPixelColor(11, strip.Color(0, 0, 0));
  strip.setPixelColor(12, strip.Color(0, 0, 0));
  strip.setPixelColor(13, strip.Color(0, 0, 0));
  strip.setPixelColor(14, strip.Color(0, 0, 0));
  strip.setPixelColor(15, strip.Color(0, 0, 0)); 
  strip.setPixelColor(16, strip.Color(0, 0, 0));
  strip.setPixelColor(17, strip.Color(0, 0, 0));
  strip.setPixelColor(18, strip.Color(0, 0, 0));
  strip.setPixelColor(19, strip.Color(0, 0, 0));
  strip.setPixelColor(20, strip.Color(0, 0, 0));
  strip.setPixelColor(21, strip.Color(0, 0, 0));
  strip.setPixelColor(22, strip.Color(0, 0, 0));
  strip.setPixelColor(23, strip.Color(0, 0, 0));
  strip.setPixelColor(24, strip.Color(0, 0, 0));
  
        
    }
    
    
   else if(pos>500 && pos<1500)
    {
        digitalWrite(led,HIGH);
         Serial.println("On");
  strip.setPixelColor(0, strip.Color(255, 0, 255));      
  strip.setPixelColor(1, strip.Color(255, 0, 255));
  strip.setPixelColor(2, strip.Color(255, 0, 255));
  strip.setPixelColor(3, strip.Color(255, 0, 255));
  strip.setPixelColor(4, strip.Color(255, 0, 255));
  strip.setPixelColor(5, strip.Color(255, 0, 255));
  strip.setPixelColor(6, strip.Color(255, 0, 255));
  strip.setPixelColor(7, strip.Color(255, 0, 255));
  strip.setPixelColor(8, strip.Color(255, 0, 255));
  strip.setPixelColor(9, strip.Color(0, 0, 0));
  strip.setPixelColor(10, strip.Color(0, 0, 0)); 
  strip.setPixelColor(11, strip.Color(0, 0, 0));
  strip.setPixelColor(12, strip.Color(0, 0, 0));
  strip.setPixelColor(13, strip.Color(0, 0, 0));
  strip.setPixelColor(14, strip.Color(0, 0, 0));
  strip.setPixelColor(15, strip.Color(0, 0, 0)); 
  strip.setPixelColor(16, strip.Color(0, 0, 0));
  strip.setPixelColor(17, strip.Color(0, 0, 0));
  strip.setPixelColor(18, strip.Color(0, 0, 0));
  strip.setPixelColor(19, strip.Color(0, 0, 0));
  strip.setPixelColor(20, strip.Color(0, 0, 0));
  strip.setPixelColor(21, strip.Color(0, 0, 0));
  strip.setPixelColor(22, strip.Color(0, 0, 0));
  strip.setPixelColor(23, strip.Color(0, 0, 0));
  strip.setPixelColor(24, strip.Color(0, 0, 0));
  
  
    }
    else if(pos>1500 && pos<2500)
    {
         digitalWrite(led,HIGH);
         Serial.println("Off");
  strip.setPixelColor(0, strip.Color(255, 0, 255));
  strip.setPixelColor(1, strip.Color(255, 0, 255));
  strip.setPixelColor(2, strip.Color(255, 0, 255));
  strip.setPixelColor(3, strip.Color(255, 0, 255));
  strip.setPixelColor(4, strip.Color(255, 0, 255));
  strip.setPixelColor(5, strip.Color(255, 0, 255));
  strip.setPixelColor(6, strip.Color(255, 0, 255));
  strip.setPixelColor(7, strip.Color(255, 0, 255));
  strip.setPixelColor(8, strip.Color(255, 0, 255));
  strip.setPixelColor(9, strip.Color(255, 0, 255));
  strip.setPixelColor(10, strip.Color(255, 0, 255));
  strip.setPixelColor(11, strip.Color(255, 0, 255));
  strip.setPixelColor(12, strip.Color(255, 0, 255));
  strip.setPixelColor(13, strip.Color(255, 0, 255));
  strip.setPixelColor(14, strip.Color(255, 0, 255));
  strip.setPixelColor(15, strip.Color(255, 0, 255));
  strip.setPixelColor(16, strip.Color(255, 0, 255));
  strip.setPixelColor(17, strip.Color(0, 0, 0));
  strip.setPixelColor(18, strip.Color(0, 0, 0));
  strip.setPixelColor(19, strip.Color(0, 0, 0));
  strip.setPixelColor(20, strip.Color(0, 0, 0));
  strip.setPixelColor(21, strip.Color(0, 0, 0));
  strip.setPixelColor(22, strip.Color(0, 0, 0));
  strip.setPixelColor(23, strip.Color(0, 0, 0));
  strip.setPixelColor(24, strip.Color(0, 0, 0));
  
    }
    
    else if(pos>2500){
    
   strip.setPixelColor(0, strip.Color(255, 0, 255));        
  strip.setPixelColor(1, strip.Color(255, 0, 255));
  strip.setPixelColor(2, strip.Color(255, 0, 255));
  strip.setPixelColor(3, strip.Color(255, 0, 255));
  strip.setPixelColor(4, strip.Color(255, 0, 255));
  strip.setPixelColor(5, strip.Color(255, 0, 255));
  strip.setPixelColor(6, strip.Color(255, 0, 255));
  strip.setPixelColor(7, strip.Color(255, 0, 255));
  strip.setPixelColor(8, strip.Color(255, 0, 255));
  strip.setPixelColor(9, strip.Color(255, 0, 255));
  strip.setPixelColor(10, strip.Color(255, 0, 255));
  strip.setPixelColor(11, strip.Color(255, 0, 255));
  strip.setPixelColor(12, strip.Color(255, 0, 255));
  strip.setPixelColor(13, strip.Color(255, 0, 255));
  strip.setPixelColor(14, strip.Color(255, 0, 255));
  strip.setPixelColor(15, strip.Color(255, 0, 255));
  strip.setPixelColor(16, strip.Color(255, 0, 255));
  strip.setPixelColor(17, strip.Color(255, 0, 255));
  strip.setPixelColor(18, strip.Color(255, 0, 255));
  strip.setPixelColor(19, strip.Color(255, 0, 255));
  strip.setPixelColor(20, strip.Color(255, 0, 255));
  strip.setPixelColor(21, strip.Color(255, 0, 255));
  strip.setPixelColor(22, strip.Color(255, 0, 255));
  strip.setPixelColor(23, strip.Color(255, 0, 255));
  strip.setPixelColor(24, strip.Color(255, 0, 255));
  
  
        
    }
     return 0;
}

void colorAll(uint32_t c, uint8_t wait) {
  uint16_t i;

  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
  }
  strip.show();
  delay(wait);
}




