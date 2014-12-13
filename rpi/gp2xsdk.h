#ifndef _GP2XSDK_
#define _GP2XSDK_

#include <math.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <pthread.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <sys/soundcard.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdarg.h>
//sq #include "usbjoy.h"

enum {
	GP2X_UP=0x1,
	GP2X_UP_LEFT=1<<1,
	GP2X_LEFT=1<<2,
	GP2X_DOWN_LEFT=1<<3,
	GP2X_DOWN=1<<4,
	GP2X_DOWN_RIGHT=1<<5,
	GP2X_RIGHT=1<<6,
	GP2X_UP_RIGHT=1<<7,
    GP2X_START=1<<8,
	GP2X_SELECT=1<<9,
	GP2X_L=1<<10,
	GP2X_R=1<<11,
    GP2X_A=1<<12,
	GP2X_B=1<<13,
	GP2X_X=1<<14,
	GP2X_Y=1<<15
};

// Default key and joystick mappings

#define RPI_KEY_A       SDLK_LCTRL
#define RPI_KEY_B       SDLK_SPACE
#define RPI_KEY_X       SDLK_LALT
#define RPI_KEY_Y       SDLK_LSHIFT
#define RPI_KEY_L       SDLK_z
#define RPI_KEY_R       SDLK_x
#define RPI_KEY_START   SDLK_RETURN
#define RPI_KEY_SELECT  SDLK_TAB
#define RPI_KEY_LEFT    SDLK_LEFT
#define RPI_KEY_RIGHT   SDLK_RIGHT
#define RPI_KEY_UP      SDLK_UP
#define RPI_KEY_DOWN    SDLK_DOWN

//player 2 keyboard defaults to disabled
#define RPI_KEY_A_2       999
#define RPI_KEY_B_2       999
#define RPI_KEY_X_2       999
#define RPI_KEY_Y_2       999
#define RPI_KEY_L_2       999
#define RPI_KEY_R_2       999
#define RPI_KEY_START_2   999
#define RPI_KEY_SELECT_2  999
#define RPI_KEY_LEFT_2    999
#define RPI_KEY_RIGHT_2   999
#define RPI_KEY_UP_2      999
#define RPI_KEY_DOWN_2    999

#define RPI_KEY_QUIT    SDLK_ESCAPE
//#define RPI_KEY_ACCEL   SDLK_BACKSPACE
#define RPI_KEY_QLOAD   SDLK_F1
#define RPI_KEY_QSAVE   SDLK_F2

//Default joy button configuration
#define RPI_JOY_UP      -1
#define RPI_JOY_DOWN    -1
#define RPI_JOY_LEFT    -1
#define RPI_JOY_RIGHT   -1
#define RPI_JOY_A       -1
#define RPI_JOY_B       -1
#define RPI_JOY_X       -1
#define RPI_JOY_Y       -1
#define RPI_JOY_L       -1
#define RPI_JOY_R       -1
#define RPI_JOY_START   -1
#define RPI_JOY_SELECT  -1
#define RPI_JOY_QUIT    -1
#define RPI_JOY_ACCEL   -1
#define RPI_JOY_QLOAD   -1
#define RPI_JOY_QSAVE   -1
#define RPI_JOY_HOTKEY  -1

#define RPI_JOY_AXIS_LR  1
#define RPI_JOY_AXIS_UD  0

// Key constants

#define J_A 0
#define J_B 1
#define J_X 2
#define J_Y 3
#define J_L 4
#define J_R 5
#define J_START 6
#define J_SELECT 7
#define J_UP 8
#define J_DOWN 9
#define J_LEFT 10
#define J_RIGHT 11

#define J_AXIS_UD 12
#define J_AXIS_LR 13

#define A_1 0
#define B_1 1
#define X_1 2
#define Y_1 3
#define L_1 4
#define R_1 5
#define START_1 6
#define SELECT_1 7
#define UP_1 8
#define DOWN_1 9
#define LEFT_1 10
#define RIGHT_1 11

#define A_2 20
#define B_2 21
#define X_2 22
#define Y_2 23
#define L_2 24
#define R_2 25
#define START_2 26
#define SELECT_2 27
#define UP_2 28
#define DOWN_2 29
#define LEFT_2 30
#define RIGHT_2 31

#define A_3 60
#define B_3 61
#define X_3 62
#define Y_3 63
#define L_3 64
#define R_3 65
#define START_3 66
#define SELECT_3 67
#define UP_3 68
#define DOWN_3 69
#define LEFT_3 70
#define RIGHT_3 71

#define A_4 72
#define B_4 73
#define X_4 74
#define Y_4 75
#define L_4 76
#define R_4 77
#define START_4 78
#define SELECT_4 79
#define UP_4 80
#define DOWN_4 81
#define LEFT_4 82
#define RIGHT_4 83

#define HOTKEY 40

#define ACCEL 50
#define QUIT 51
#define HELP 52

#define QLOAD 55
#define QSAVE 56

// Axis positions
#define CENTER  0
#define LEFT    1
#define RIGHT   2
#define UP      1
#define DOWN    2


#ifdef __cplusplus
 extern "C" {
#endif

void pi_initialize();
void pi_terminate(void);
int init_SDL(void);
void deinit_SDL(void);
void pi_deinit(void);
void pi_setvideo_mode(int hw, int vh);
unsigned long pi_joystick_read(int which1);
void pi_video_flip(void);
void * UpperMalloc(size_t size);
void UpperFree(void* mem);
int GetUpperSize(void* mem);
#ifdef __cplusplus
 } // End of extern "C"
#endif

#endif
