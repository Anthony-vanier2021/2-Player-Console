
/******************************************************************************
  Filename: classes.cpp

  Dependancies: classes.h

  Description: 
  Merging of Controls.cpp and Controls.cpp (+ creation of Screen class)
  See their appropriate header comments to see changes

******************************************************************************/

//#include "classes.h"

/******************************************************************************
  Portion: Controls

  Description: 
  Holds the definitions of all the functions in the Controls class

  Functions:
  set_pins - set the two analog pins and the pushbutton pin of the Controls
  get_x - get the x coordinate of the Controls
  get_y - get the y coordinate of the Controls
  check_button - check whether the button is pressed or not
  get_dir - uses get_x and get_y to simplify coding games
===============================================================================
  Revision History  
-------------------------------------------------------------------------------
Author        | Version | yymmdd  | Description
===============================================================================
canadianthony | V0      | 230404  | All initial Controls functions including 
 "            | "       | "       | the constructor, set_pins, get_x, get_y
 "            | "       | "       | check_button, and get_dir
-------------------------------------------------------------------------------

******************************************************************************/




  //Check if button was clicked

  



/******************************************************************************
  Portion: Controls

  Description: 
  Holds the definitions of all the functions in the Controls class

  Functions:
  set_js_pins - set the two analog pins and the pushbutton pin of the Controls
  get_x - get the x coordinate of the Controls
  get_y - get the y coordinate of the Controls
  check_js_button - check whether the Controls button is pressed or not
  get_dir - get the Controls direction
  set_pb_pins - set the two digital pushbutton pins
  set_pins - set all the pin of the Controls
  check_a_button - check status of button A
  check_b_button - check status of button B
===============================================================================
  Revision History  
-------------------------------------------------------------------------------
Author        | Version | yymmdd  | Description
===============================================================================
canadianthony | V0      | 230404  | setup Controls pass-through functions and
 "            | "       | "       | initial Controls functions including 
 "            | "       | "       | set_pb_pins, set_pins, check_a_button, and
 "            | "       | "       | check_b_button.
-------------------------------------------------------------------------------

******************************************************************************/
/*
  //Functions from Controls class
  int Controls::get_x() {
    return js.get_x();
  }
  int Controls::get_y() {
    return js.get_y();
  }
  bool Controls::check_js_button() {
    return js.check_button();
  }
  js_dir Controls::get_dir() {
    return js.get_dir();
  }
  void Controls::set_js_pins(uint8_t x_pin, uint8_t y_pin, uint8_t b_pin) {
    js.set_pins(x_pin, y_pin, b_pin);
  }

  //Constructor
  Controls::Controls(uint8_t pba_pin, uint8_t pbb_pin, uint8_t jsx_pin, uint8_t jsy_pin, uint8_t jsb_pin) {
    set_pins(pba_pin, pbb_pin, jsx_pin, jsy_pin, jsb_pin);
  }

  Controls::Controls(Controls Controls, uint8_t pba_pin, uint8_t pbb_pin) {
    js = Controls;
    set_pb_pins(pba_pin, pbb_pin);
  }

  //changes only the A and B buttons
  void Controls::set_pb_pins(uint8_t a_pin, uint8_t b_pin) {
    a = a_pin;
    b = b_pin;
    pinMode(a_pin, INPUT);
    pinMode(b_pin, INPUT);
  }
  
  //changes all pins
  void Controls::set_pins(uint8_t pba_pin, uint8_t pbb_pin, uint8_t jsx_pin, uint8_t jsy_pin, uint8_t jsb_pin) {
    set_js_pins(jsx_pin, jsy_pin, jsb_pin);
    set_pb_pins(pba_pin, pbb_pin);  
  }

  //check if the A button was pressed
  bool Controls::check_a_button() {
    return digitalRead(a);
  }

  //check if the B button was pressed
  bool Controls::check_b_button() {
    return digitalRead(b);
  }
*/
/******************************************************************************
  Portion: Screen

  Description: 
  

  Functions:
===============================================================================
  Revision History  
-------------------------------------------------------------------------------
Author        | Version | yymmdd  | Description
===============================================================================
canadianthony | V0      | 230404  | 
 "            | "       | "       | 
-------------------------------------------------------------------------------

******************************************************************************/

