
#include "Adafruit_BLE.h"
#include "Adafruit_BluefruitLE_SPI.h"
#include "Adafruit_BluefruitLE_UART.h"

#include "BluefruitConfig.h"


#define COMMON_ANODE
#define delayTime 8
#define TRUE
#define redPin 9
#define greenPin 10
#define bluePin 11
int black[3]  = { 0, 0, 0 };
int white[3]  = { 255, 255, 255 };
int red[3]    = { 255, 0, 0 };
int orange[3] = {255, 32, 0 };
int yellow[3] = { 255, 106, 0 };
int green[3]  = { 0, 255, 0 };
int teal[3] = { 0, 255, 255 };
int ltblue[3] = { 0, 127, 255 };
int blue[3]   = { 0, 0, 255 };
int purple[3] = { 255, 0, 255 };
int pink[3] = { 255, 0, 55 };
int dimWhite[3] = { 30, 30, 30 };

//#define powerPin 5
void setColor(int red, int green, int blue);



//
//
//
void pulse(int red, int green, int blue)
  {
  for( int i = 0 ; i < 255 ; i += 1 )
    {
    green += 1;
    red += 1;
    //analogWrite( bluePin, 255 - blueVal );
    analogWrite(redPin, red);
    //analogWrite(11, 255 - blue);
    Serial.println(red);

    delay( 100 );
    }
  }


void go()
{


  /*
   
  setColor(255, 0, 0);  // red
  setColor(255, 32, 0);  // orange
  setColor(255, 106, 0);  // yellow 
  setColor(0,255,0);      // green
  setColor(0,255,255); // teal
  setColor(255,255,255); // white
  setColor(0,127,255); // lt blue
  setColor(0, 0, 255);  // blue
  setColor(255, 0, 255);  // purple
  setColor(255, 0, 55);  // pink
  
  

/*  

  int redVal = 255;
  int blueVal = 0;
  int greenVal = 0;
  for( int i = 0 ; i < 255 ; i += 1 ){
    greenVal += 1;
    //redVal -= 1;
    analogWrite( bluePin, 255 - blueVal );
    analogWrite( redPin, 255 - redVal );
    analogWrite( greenPin, 255 - greenVal );

  delay( delayTime );
  }
 

  for( int i = 0 ; i < 255 ; i += 1 ){
    redVal -= 1;
    analogWrite( bluePin, 255 - blueVal );
    analogWrite( redPin, 255 - redVal );
    analogWrite( greenPin, 255 - greenVal );
    
    delay( delayTime );
  }
 
  for( int i = 0 ; i < 255 ; i += 1 ){
    blueVal += 1;
    analogWrite( bluePin , 255 - blueVal );
    analogWrite( redPin, 255 - redVal );
    analogWrite( greenPin, 255 - greenVal );
    
    delay( delayTime );
  }
    for( int i = 0 ; i < 255 ; i += 1 ){
    greenVal -= 1;
    analogWrite( bluePin , 255 - blueVal );
    analogWrite( redPin, 255 - redVal );
    analogWrite( greenPin, 255 - greenVal );
    
    delay( delayTime );
  }
    for( int i = 0 ; i < 255 ; i += 1 ){
    redVal += 1;
    analogWrite( bluePin , 255 - blueVal );
    analogWrite( redPin, 255 - redVal );
    analogWrite( greenPin, 255 - greenVal );
    
    delay( delayTime );
    }
    for( int i = 0 ; i < 255 ; i += 1 ){
    blueVal-= 1;
    analogWrite( bluePin , 255 - blueVal );
    analogWrite( redPin, 255 - redVal );
    analogWrite( greenPin, 255 - greenVal );
    
    delay( delayTime );
    }

*/

}
void fade(){
  int i = 100;
  while(i!=0){ go(); i-= 1; }
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
    
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
