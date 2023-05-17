/******************************************************************************
  Filename: Testing Controllers.ino

  Dependancies: pins.h, classes.h (+ parameters.h, Arduino.h),

  Description: 
  Tells you when the joystick is pushed in any direction and if joystick buttom
  is pressed, the coordinates will be given

  Functions:

===============================================================================
  Revision History  
-------------------------------------------------------------------------------
Author        | Version | yymmdd  | Description
===============================================================================
canadianthony | V0      | 230404  | TO BE REMADE USING CLASSES
 "            | "       | "       | 
 "            | "       | "       | 
 "            | "       | "       | 
-------------------------------------------------------------------------------

******************************************************************************/

//#define PRINT2SERIAL
#define PRINT2SCREEN

#include "parameters.h"

//Game_Console Game = Game_Console();
//GFXcanvas1 s1_canvas(240,240), s1_canvas(240,240);

Adafruit_ST7789 Screen_1(P1_SC_CS, P1_SC_DC, P1_SC_RES);

void setup() {
  // put your setup code here, to run once:

  //To debug using Serial Monitor
  //Serial.begin(9600);
  
  //To debug using Console Screen
  Screen_1.init(240, 240);
  //Screen_2.init(240, 240);
  Screen_1.setRotation(2);
  //Screen_2.setRotation(2);
  
}

//NEEDED FOR SERIAL MONITOR
//bool p1x_flag=false, p1y_flag=false, p2x_flag=false, p2y_flag=false, 
//     p1p_flag=false, p2p_flag=false, 
//     p1a_flag=false, p1b_flag=false, p2a_flag=false, p2b_flag=false;

void loop() {
  // put your main code here, to run repeatedly:
  

  //int p1x = Player1.get_x(), p1y = Player1.get_y(),
  //    p2x = Player2.get_x(), p2y = Player2.get_y();
  Buffer_1.enableDisplay(true);
  Buffer_1.fillScreen(ST77XX_RED);
  Buffer_1.setCursor(0, 0);
  Buffer_1.print("Hello World");
  Buffer_1.
  


/*
//DEBUGGING USING CONSOLE SCREEN
  Buffer_2.enableDisplay(true);
  Buffer_1.enableDisplay(false);
  Buffer_2.fillScreen(ST77XX_BLACK);
  Buffer_2.setCursor(0, 0);

  Buffer_2.print("\n\rX=");
  Buffer_2.println(p1x);

  Buffer_2.print("\n\rY=");
  Buffer_2.println(p1y);

  Buffer_2.print("\n\rD: ");
  switch (Player2.get_dir()){
    case U:
      Buffer_2.print("Up");
      break;
    case UR:
      Buffer_2.print("Up-Right");
      break;
    case UL:
      Buffer_2.print("Up-Left");
      break;
    case NONE:
      Buffer_2.print("None");
      break;
    case R:
      Buffer_2.print("Right");
      break;
    case L:
      Buffer_2.print("Left");
      break;
    case D:
      Buffer_2.print("Down");
      break;
    case DR:
      Buffer_2.print("Down-Right");
      break;
    case DL:
      Buffer_2.print("Down-Left");
      break;
    default:
      Buffer_2.print("ERROR");
  }
  Buffer_2.print("\n\n\r");

  if (p2x <= JS_LOW_ACTIVATE || p2x >= JS_HIGH_ACTIVATE) {
    Buffer_2.print("X");
  } else {
    Buffer_2.print("x");
  }

  if (p2y <= JS_LOW_ACTIVATE || p2y >= JS_HIGH_ACTIVATE) {
    Buffer_2.print("Y");
  } else {
    Buffer_2.print("y");
  }

  if (Player2.check_a_button()) {
    Buffer_2.print("A");
  } else {
    Buffer_2.print("a");
  }

  if (Player2.check_b_button()) {
    Buffer_2.print("B");
  } else {
    Buffer_2.print("b");
  }

  if (Player2.check_js_button()) {
    Buffer_2.print("P");
  } else {
    Buffer_2.print("p");
  }
*/
/*
  Screen_2.SPI_CS_LOW();
  Screen_1

  //Buffer_1.enableDisplay(true);
  //Buffer_2.enableDisplay(false);
  Buffer_1.fillScreen(ST77XX_BLACK);
  Buffer_1.setCursor(0, 0);

  Buffer_1.print("\n\rX=");
  Buffer_1.println(p1x);

  Buffer_1.print("\n\rY=");
  Buffer_1.println(p1y);

  Buffer_1.print("\n\rD: ");
  switch (Player1.get_dir()){
    case U:
      Buffer_1.print("Up");
      break;
    case UR:
      Buffer_1.print("Up-Right");
      break;
    case UL:
      Buffer_1.print("Up-Left");
      break;
    case NONE:
      Buffer_1.print("None");
      break;
    case R:
      Buffer_1.print("Right");
      break;
    case L:
      Buffer_1.print("Left");
      break;
    case D:
      Buffer_1.print("Down");
      break;
    case DR:
      Buffer_1.print("Down-Right");
      break;
    case DL:
      Buffer_1.print("Down-Left");
      break;
    default:
      Buffer_1.print("ERROR");
  }
  Buffer_1.print("\n\n\r");

  if (p1x <= JS_LOW_ACTIVATE || p1x >= JS_HIGH_ACTIVATE) {
    Buffer_1.print("X");
  } else {
    Buffer_1.print("x");
  }

  if (p1y <= JS_LOW_ACTIVATE || p1y >= JS_HIGH_ACTIVATE) {
    Buffer_1.print("Y");
  } else {
    Buffer_1.print("y");
  }

  if (Player1.check_a_button()) {
    Buffer_1.print("A");
  } else {
    Buffer_1.print("a");
  }

  if (Player1.check_b_button()) {
    Buffer_1.print("B");
  } else {
    Buffer_1.print("b");
  }

  if (Player1.check_js_button()) {
    Buffer_1.print("P");
  } else {
    Buffer_1.print("p");
  }
  
  Screen_1.endWrite();
*/
  //Screen_1.drawBitmap(0,0,Buffer_1.getBuffer(),240,240,ST77XX_WHITE,ST77XX_BLACK);

  //Buffer_1.print("\n\rD: ");
  //switch (Player1.get_dir()){
  //  case U:
  //  Buffer_1.print()
  //}



  //if (p2x <= JS_LOW_ACTIVATE || p2x >= JS_HIGH_ACTIVATE) {
  //  Buffer_2.print("\n\r\n\nX ACTIVE\n");
  //} else {
  //  Buffer_2.print("\n\r\n\nx not active\n");
  //}

  //if (p2y <= JS_LOW_ACTIVATE || p2y >= JS_HIGH_ACTIVATE) {
  //  Buffer_2.print("\n\r\n\n\nY ACTIVE");
  //} else {
  //  Buffer_2.print("\n\r\n\n\ny not active");
  //}
  
  /*
  //print x coord when you press A
  
  if (Player2.check_a_button() && !p2a_flag) {
    p2a_flag = true;
    Serial.print("p2x: ");
    Serial.println(p2x);
  } else if (!Player2.check_a_button()) {
    p2a_flag = false;
  }
  */
  //Buffer_2.print
//*/
//DEBUGGING USING CONSOLE SCREEN


//DEBUGGING USING SERIAL MONITOR
/*
  //Joystick debugs
  //Detect if joystick is being pointed in a direction
  //Player 1 X-axis
  if (p1x <= JS_LOW_ACTIVATE || p1x >= JS_HIGH_ACTIVATE) {
    if(!p1x_flag) {
      Serial.print("PLAYER 1 X ACTIVATED\n");
      p1x_flag = true;
    }
  } else {
    p1x_flag = false;
  }
  //Player 1 Y-axis
  if (p1y <= JS_LOW_ACTIVATE || p1y >= JS_HIGH_ACTIVATE) {
    if (!p1y_flag) {
      Serial.print("PLAYER 1 Y ACTIVATED\n");
      p1y_flag = true;
    }
  } else {
    p1y_flag = false;
  }
  //Player 2 X-axis
  if (p2x <= JS_LOW_ACTIVATE || p2x >= JS_HIGH_ACTIVATE) {
    if (!p2x_flag) {
      Serial.print("PLAYER 2 X ACTIVATED\n");
      p2x_flag = true;
    }
  } else {
    p2x_flag = false;
  }
  //Player 2 Y-axis
  if (p2y <= JS_LOW_ACTIVATE || p2y >= JS_HIGH_ACTIVATE) {
    if (!p2y_flag) {
      Serial.print("PLAYER 2 Y ACTIVATED\n");
      p2y_flag = true;
    }
  } else {
    p2y_flag = false;
  }


  //Give Joystick direction at js press
  if (Player1.check_js_button() && !p1p_flag) {
    p1p_flag = true;
    Serial.print("p1 direction: ");
    switch (Player1.get_dir()){
    case U:
      Serial.print("Up");
      break;
    case UR:
      Serial.print("Up-Right");
      break;
    case UL:
      Serial.print("Up-Left");
      break;
    case NONE:
      Serial.print("None");
      break;
    case R:
      Serial.print("Right");
      break;
    case L:
      Serial.print("Left");
      break;
    case D:
      Serial.print("Down");
      break;
    case DR:
      Serial.print("Down-Right");
      break;
    case DL:
      Serial.print("Down-Left");
      break;
    default:
      Serial.print("ERROR");
    }
    Serial.print("\n");
  } else if (!Player1.check_js_button()) {
    p1p_flag = false;
  }
  if (Player2.check_js_button() && !p2p_flag) {
    p2p_flag = true;
    Serial.print("p2 direction: ");
    switch (Player1.get_dir()){
    case U:
      Serial.print("Up");
      break;
    case UR:
      Serial.print("Up-Right");
      break;
    case UL:
      Serial.print("Up-Left");
      break;
    case NONE:
      Serial.print("None");
      break;
    case R:
      Serial.print("Right");
      break;
    case L:
      Serial.print("Left");
      break;
    case D:
      Serial.print("Down");
      break;
    case DR:
      Serial.print("Down-Right");
      break;
    case DL:
      Serial.print("Down-Left");
      break;
    default:
      Serial.print("ERROR");
    }
    Serial.print("\n");
  } else if (!Player2.check_js_button()) {
    p2p_flag = false;
  }
    
  //print x coord when you press A
  if (Player1.check_a_button() && !p1a_flag) {
    p1a_flag = true;
    Serial.print("p1x: ");
    Serial.println(p1x);
  } else if (!Player1.check_a_button()) {
    p1a_flag = false;
  }
  if (Player2.check_a_button() && !p2a_flag) {
    p2a_flag = true;
    Serial.print("p2x: ");
    Serial.println(p2x);
  } else if (!Player2.check_a_button()) {
    p2a_flag = false;
  }

  //print y coord when you press B
  if (Player1.check_b_button() && !p1b_flag) {
    p1b_flag = true;
    Serial.print("p1y: ");
    Serial.println(p1y);
  } else if (!Player1.check_b_button()) {
    p1b_flag = false;
  }
  if (Player2.check_b_button() && !p2b_flag) {
    p2b_flag = true;
    Serial.print("p2y: ");
    Serial.println(p2y);
  } else if (!Player2.check_b_button()) {
    p2b_flag = false;
  }
*/
//DEBUGGING USING SERIAL MONITOR
}

