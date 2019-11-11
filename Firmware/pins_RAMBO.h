#include "macros.h"

/**
 * Rambo pin assignments
 */

#ifndef __AVR_ATmega2560__
  #error "Oops!  Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu."
#endif

#define BOARD_NAME "Rambo"
#define ELECTRONICS "Rambo 1.4"

#ifndef KNOWN_BOARD
  #define KNOWN_BOARD
#endif

#define PINDA_THERMISTOR
// #define AMBIENT_THERMISTOR

//
// Servos
//
//#define SERVO0_PIN         22   // Motor header MX1
//#define SERVO1_PIN         23   // Motor header MX2
//#define SERVO2_PIN         24   // Motor header MX3
//#define SERVO3_PIN          5   // PWM header pin 5 CHANGED TO SOL0_PIN

//
// Solenoids
//
// #define SOL0_PIN 5

//
// Limit Switches
//
#define X_MIN_PIN          12
// #define X_MAX_PIN          24 //Used for Fil Runout on E0
// #define X_MAX_PIN          -1
#define Y_MIN_PIN          11
// #define Y_MAX_PIN          23 //Used for Fil Runout on E1
// #define Y_MAX_PIN          -1
#define Z_MIN_PIN          10
#define Z_MAX_PIN          30

//
// Fil Runout switches
//
#define FIL_RUNOUT_PIN 24
 #define FIL_RUNOUT2_PIN 23
//#define FR_SENS X_MAX_PIN

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  // #define Z_MIN_PROBE_PIN  30
#endif

//
// Steppers
//
#define X_STEP_PIN         37
#define X_DIR_PIN          48
#define X_ENABLE_PIN       29

#define Y_STEP_PIN         36
#define Y_DIR_PIN          49
#define Y_ENABLE_PIN       28

#define Z_STEP_PIN         35
#define Z_DIR_PIN          47
#define Z_ENABLE_PIN       27

#define E0_STEP_PIN        34
#define E0_DIR_PIN         43
#define E0_ENABLE_PIN      26

#define E1_STEP_PIN        33
#define E1_DIR_PIN         42
#define E1_ENABLE_PIN      25

// Microstepping pins - Mapping not from fastio.h (?)
#define X_MS1_PIN          40
#define X_MS2_PIN          41
#define Y_MS1_PIN          69
#define Y_MS2_PIN          39
#define Z_MS1_PIN          68
#define Z_MS2_PIN          67
#define E0_MS1_PIN         65
#define E0_MS2_PIN         66
#define E1_MS1_PIN         63
#define E1_MS2_PIN         64

#define DIGIPOTSS_PIN      38
#define DIGIPOT_CHANNELS  { 4,5,3,0,1 }   // X Y Z E0 E1 digipot channels to stepper driver mapping
#ifndef DIGIPOT_MOTOR_CURRENT
  #define DIGIPOT_MOTOR_CURRENT { 135,135,135,135,135 }   // Values 0-255 (RAMBO 135 = ~0.75A, 185 = ~1A)
#endif

//
// Temperature Sensors
//
#define TEMP_0_PIN          0   // Analog Input
#define TEMP_1_PIN          1   // Analog Input
// #define TEMP_2_PIN          5
#define TEMP_BED_PIN        2   // Analog Input
#define TEMP_PINDA_PIN      7  // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN        9
#define HEATER_1_PIN        7
// #define HEATER_2_PIN        6
#define HEATER_BED_PIN      3

#ifndef FAN_PIN
  #define FAN_PIN           6 //Pin 8 used for solenoid. Switched to Fan1
#endif
#define FAN1_PIN            2 //Fan2 pin used for Fan1 as solenoid uses fan0
// #define FAN2_PIN            2

#define E0_FAN_PIN -1
#define E1_FAN_PIN -1
#define E2_FAN_PIN -1

//
// Misc. Functions
//
#define SDSS               53 //PB0
#define LED_PIN            13
//#define PS_ON_PIN           4
// #define CASE_LIGHT_PIN     46


//
// Tachometers
//
// #define TACH_0             -1 
// #define TACH_1             -1 


// #define KILL_PIN           -1
// #define SDSS               53

// #define BEEPER 79
  #define BEEPER 74

// LCD / Controller
//
#if ENABLED(ULTRA_LCD)
  #define KILL_PIN         80

  #if ENABLED(NEWPANEL)

    #define LCD_PINS_RS     70
    #define LCD_PINS_ENABLE 71
    #define LCD_PINS_D4     72
    #define LCD_PINS_D5     73
    #define LCD_PINS_D6     74
    #define LCD_PINS_D7     75

    #if ENABLED(VIKI2) || ENABLED(miniVIKI)

      #define LCD_SCREEN_ROT_180

      #define BTN_EN1      85  
      #define BTN_EN2      84  //PH2
      #define BTN_ENC      83 
      #define STAT_LED_RED_PIN 22
      #define STAT_LED_BLUE_PIN 32

    #else // !VIKI2 && !miniVIKI

      //#define BEEPER_PIN   79   // AUX-4

      // AUX-2
      #define BTN_EN1      76
      #define BTN_EN2      77
      #define BTN_ENC      78

      #define SD_DETECT_PIN 81

    #endif // !VIKI2 && !miniVIKI

  #else // !NEWPANEL - old style panel with shift register

    #define LCD_PINS_RS     75
    #define LCD_PINS_ENABLE 17
    #define LCD_PINS_D4     23
    #define LCD_PINS_D5     25
    #define LCD_PINS_D6     27
    #define LCD_PINS_D7     29

  #endif // !NEWPANEL

#endif // ULTRA_LCD
