/*
 ===============================================================================
 Name        : sp.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
 ===============================================================================
 */

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif
#include <cr_section_macros.h>

// TODO: insert other include files here
#include <time.h>
char sbuffer[30];

// TODO: insert other definitions and declarations here

int main(void) {

#if defined (__USE_LPCOPEN)
	// Read clock settings and update SystemCoreClock variable
	SystemCoreClockUpdate();
#if !defined(NO_BOARD_LIB)
	// Set up and initialize all required blocks and
	// functions related to the board hardware
	Board_Init();
	// Set the LED to the state of "On"
	Board_LED_Set(0, true);
#endif
#endif
	time_t rawtime;
	struct tm * timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	// TODO: insert code here
	OLED_Init();
	OLED_Draw_Point(10, 10, 1);
	OLED_Draw_Point(15, 15, 1);
	OLED_Draw_Point(20, 20, 1);
	OLED_Draw_Line(0, 0, 127, 0);
	OLED_Draw_Line(0, 63, 127, 63);
	OLED_Draw_Line(0, 0, 0, 63);
	OLED_Draw_Line(127, 0, 127, 63);

	// Enter an infinite loop, just incrementing a counter

	while (1) {
		OLED_Puts(0, 0, "*** TEMPERATURA ***");
		sprintf(sbuffer, "%d", timeinfo->tm_mday);
		OLED_Puts(0, 2, sbuffer);

		OLED_Refresh_Gram();
	}
	return 0;
}
