/******************************************************************************
  Filename: classes.cpp

  Dependancies: classes.h

  Description: 
  Merging of Joystick.cpp and Controls.cpp (+ creation of Screen class)
  See their appropriate header comments to see changes

******************************************************************************/

#include "classes.h"

/******************************************************************************
  Class: Controls

  Dependancies: classes.h

  Description: 
  Merging of Joystick class into Controller and change it to Controls class
  Contains all the input data for the console

******************************************************************************/

  //Constructor
  Controls::Controls(uint8_t pba_pin, uint8_t pbb_pin, uint8_t jsx_pin, uint8_t jsy_pin, uint8_t jsb_pin) {
    set_pins(pba_pin, pbb_pin, jsx_pin, jsy_pin, jsb_pin);
  }

  //changes all input pins
  void Controls::set_pins(uint8_t pba_pin, uint8_t pbb_pin, uint8_t jsx_pin, uint8_t jsy_pin, uint8_t jsb_pin) {
    set_js_pins(jsx_pin, jsy_pin, jsb_pin);
    set_pb_pins(pba_pin, pbb_pin);  
  }

  //change only the pins for A and B buttons
  void Controls::set_pb_pins(uint8_t a_pin, uint8_t b_pin) {
    a = a_pin;
    b = b_pin;
    pinMode(a_pin, INPUT);
    pinMode(b_pin, INPUT);
  }

  //change only the pins for the joystick
  void Controls::set_js_pins(uint8_t x_pin, uint8_t y_pin, uint8_t pb_pin) {
    x = x_pin;
    y = y_pin;
    pb = pb_pin;
    pinMode(pb_pin, INPUT);
  }

  //If a game requires it, they can directly access the coordinates of the Controls
  //It is not recommended since the actual Controls do not seem to be very precise
  int Controls::get_x() {
    return analogRead(x);
  }
  int Controls::get_y() {
    return analogRead(y);
  }

  //check if the joystick was pressed
  bool Controls::check_js_button() {
    return !digitalRead(pb);
  }

  //check if the A button was pressed
  bool Controls::check_a_button() {
    return digitalRead(a);
  }

  //check if the B button was pressed
  bool Controls::check_b_button() {
    return digitalRead(b);
  }

  //Simpler (and more reliable) way of checking the status of the Controls
  js_dir Controls::get_dir() {
    js_dir x_dir = NONE, y_dir = NONE, ret_dir = NONE;
    int x_val = get_x(), y_val = get_y();

    if (x_val <= JS_LOW_ACTIVATE) {
      x_dir = L;
    } else if (x_val >= JS_HIGH_ACTIVATE) {
      x_dir = R;
    }

    if (y_val <= JS_LOW_ACTIVATE) {
      y_dir = D;
    } else if (y_val >= JS_HIGH_ACTIVATE) {
      y_dir = U;
    }

    switch (x_dir) {
    case L:
      switch (y_dir) {
      case U:
        ret_dir = UL;
        break;
      case D:
        ret_dir = DL;
        break;
      case NONE:
        ret_dir = L;
        break;
      }
      break;
    case R:
      switch (y_dir) {
      case U:
        ret_dir = UR;
        break;
      case D:
        ret_dir = DR;
        break;
      case NONE:
        ret_dir = R;
        break;
      }
      break;
    case NONE:
      switch (y_dir) {
      case U:
        ret_dir = U;
        break;
      case D:
        ret_dir = D;
        break;
      case NONE:
        ret_dir = NONE;
        break;
      }
      break;
    }
    return ret_dir;
  }

  Controls Player1(P1_PB_A, P1_PB_B, P1_JS_X, P1_JS_Y, P1_JS_PB);
  Controls Player2(P2_PB_A, P2_PB_B, P2_JS_X, P2_JS_Y, P2_JS_PB);

/******************************************************************************
  Class: Game_Console

  Dependancies: classes.h

  Description: 
  Merging of Joystick class into Controller and change it to Controls class
  Contains all the input data for the console

******************************************************************************/

  Game_Console::Game_Console(){
    screen1 = Adafruit_ST7789(P1_SC_CS, P1_SC_DC, P1_SC_RES);
    //screen2 = Adafruit_ST7789(P2_SC_CS, P2_SC_DC, P2_SC_RES);
    //screen1.setRotation(2);
    //screen2.setRotation(2);
    //ADD screen.init? probably game.init or smth
  }

  void Game_Console::set_mode(){
    
  }

/*
  void Game_Console::init() {
    switch (mode) {

    case DIRECT:
    break;

    case ROTATED:
      screen1.setRotation(2);
    break;

    case SINGLE_PLAYER:
      screen1.setRotation(2);
      while
      screen1.endWrite()
    break;
    }
  }
*/
  
