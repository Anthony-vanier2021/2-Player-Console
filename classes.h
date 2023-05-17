/******************************************************************************
  Filename: classes.h

  Dependancies: parameters.h

  Description: 
  Holds the js_dir enum and the prototypes of the Joystick and Controls class

  Functions:
===============================================================================
  Revision History  
-------------------------------------------------------------------------------
Author        | Version | yymmdd  | Description
===============================================================================
canadianthony | V0      | 230404  | Initial js_dir enum with 9 directions,   
 "            | "       | "       | Joystick and Controls class
-------------------------------------------------------------------------------

******************************************************************************/

//Protocol for vars: add "_pin" to the variable in class for function parameter

#ifndef CLASSES_H
#define CLASSES_H

#include "Arduino.h"
#include "parameters.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ST7789.h"
#include "SPI.h"
#include "pins.h"

//No Y direction starts at 0, Up starts at 3, Down starts at 6,
//No X direction adds 0, Right adds 1, Left adds 2
enum js_dir {NONE, R, L, 
              U, UR, UL, 
              D, DR, DL,};


class Controls {
  private:
  uint8_t a, b, x, y, pb; //pins
  public:

  //setup functions
  Controls(uint8_t pb_a_pin, uint8_t pb_b_pin,
           uint8_t js_x_pin, uint8_t js_y_pin, uint8_t js_pb_pin); 
  void set_pins(uint8_t pb_a_pin, uint8_t pb_b_pin, 
                uint8_t js_x_pin, uint8_t js_y_pin, uint8_t js_b_pin); 
  void set_pb_pins(uint8_t a_pin, uint8_t b_pin); 
  void set_js_pins(uint8_t x_pin, uint8_t y_pin, uint8_t pb_pin); 

  //get input data
  int get_x(); 
  int get_y(); 
  bool check_js_button(); 
  bool check_a_button();
  bool check_b_button();
  js_dir get_dir(); 
};

class Game_Console{
  private:
  uint8_t dca, csa, resa, dcb, csb, resb;
  public:
  Adafruit_ST7789 screen1 = Adafruit_ST7789(0,0,0);//, screen2 = Adafruit_ST7789(0,0,0); //Public so people can access all of Adafruit's available prints functions
  Game_Console();
  void set_mode();
  //void init();
};

 
extern Controls Player1;
extern Controls Player2;
#define Buffer_1 Screen_1
#define Buffer_2 Screen_2
//#define Screen_1 Game.screen1
//#define Screen_2 Game.screen2



#endif //CLASSES_H