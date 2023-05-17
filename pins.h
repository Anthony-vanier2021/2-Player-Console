/******************************************************************************
  Filename: pins.h

  Dependancies:

  Description: 
  Holds the macros of the pins that connect to the Arduino

  Functions:
===============================================================================
  Revision History  
-------------------------------------------------------------------------------
Author        | Version | yymmdd  | Description
===============================================================================
canadianthony | V0      | 230404  | Includes the pins for the arduino testing
 "            | "       | "       | Joystick and Controller class
-------------------------------------------------------------------------------
canadianthony | V1      | 230411  | All the pins for the proof of concecpt.
 "            | "       | "       | X and Y are switched from actual joystick
 "            | "       | "       | since it is meant to be mounted on the side
******************************************************************************/

#ifndef PINS_H
#define PINS_H

//Setup up the pins of the controller
#define SCLPIN    13
#define SDAPIN    11
#define DC_PIN    P1_SC_DC
#define RESPIN    P1_SC_RES
#define CS_PIN    P1_SC_CS

//Player 1
//Joystick
#define P1_JS_X   A2
#define P1_JS_Y   A3
#define P1_JS_PB  A5
//Buttons
#define P1_PB_A   4
#define P1_PB_B   5
//Screen
#define P1_SC_RES 6
#define P1_SC_DC  7
#define P1_SC_CS  8

//Player 2
//Joystick
#define P2_JS_X   A1
#define P2_JS_Y   A0
#define P2_JS_PB  A4
//Buttons
#define P2_PB_A   2
#define P2_PB_B   3
//Screen
#define P2_SC_RES RESPIN
#define P2_SC_DC  DC_PIN
#define P2_SC_CS  CS_PIN

#endif //PINS_H