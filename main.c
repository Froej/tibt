#include <stdio.h>
#include <stdlib.h>
#include <3ds.h>
 
int main(int argc, char **argv) {
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);
 
    // Main loop
    while (aptMainLoop())
    {
        hidScanInput();
       
        touchPosition touch;
        hidTouchRead(&touch);
        printf("\x1b[0;0HX coordinate: %i       ",touch.px);
        printf("\x1b[1;0HY coordinate: %i       ",touch.py);
 
        u32 kHeld = hidKeysHeld();
        if (kHeld & KEY_TOUCH)
            printf("\x1b[2;0HIs touch screen active: \x1b[32mTRUE \x1b[0m\n");
        else
            printf("\x1b[2;0HIs touch screen active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_A)
			printf("\x1b[3;0HIs A button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[3;0HIs A button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_B)
			printf("\x1b[4;0HIs B button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[4;0HIs B button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_X)
			printf("\x1b[5;0HIs X button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[5;0HIs X button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_Y)
			printf("\x1b[6;0HIs Y button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[6;0HIs Y button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_L)
			printf("\x1b[7;0HIs L button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[7;0HIs L button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_R)
			printf("\x1b[8;0HIs R button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[8;0HIs R button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_SELECT)
			printf("\x1b[9;0HIs Select button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[9;0HIs Select button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_DLEFT)
			printf("\x1b[10;0HIs D-Pad Left button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[10;0HIs D-Pad Left button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_DRIGHT)
			printf("\x1b[11;0HIs D-Pad Right button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[11;0HIs D-Pad Right button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_DUP)
			printf("\x1b[12;0HIs D-Pad Up button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[12;0HIs D-Pad Up button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_DDOWN)
			printf("\x1b[13;0HIs D-Pad Down button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[13;0HIs D-Pad Down button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_CPAD_LEFT)
			printf("\x1b[14;0HIs C-Pad Left button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[14;0HIs C-Pad Left button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_CPAD_RIGHT)
			printf("\x1b[15;0HIs C-Pad Right button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[15;0HIs C-Pad Right button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_CPAD_UP)
			printf("\x1b[16;0HIs C-Pad Up button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[16;0HIs C-Pad Up button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_CPAD_DOWN)
			printf("\x1b[17;0HIs C-Pad Down button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[17;0HIs C-Pad Down button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_CSTICK_LEFT)
			printf("\x1b[18;0HIs C-Stick Left button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[18;0HIs C-Stick Left button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_CSTICK_RIGHT)
			printf("\x1b[19;0HIs C-Stick Right button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[19;0HIs C-Stick Right button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_CSTICK_UP)
			printf("\x1b[20;0HIs C-Stick Up button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[20;0HIs C-Stick Up button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_CSTICK_DOWN)
			printf("\x1b[21;0HIs C-Stick Down button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[21;0HIs C-Stick Down button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_ZL)
			printf("\x1b[22;0HIs ZL button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[22;0HIs ZL button active: \x1b[31mFALSE\x1b[0m\n");
		if (kHeld & KEY_ZR)
			printf("\x1b[23;0HIs ZR button active: \x1b[32mTRUE \x1b[0m\n");
		else
			printf("\x1b[23;0HIs ZR button active: \x1b[31mFALSE\x1b[0m\n");
		
		u32 kDown = hidKeysDown();
        if (kDown & KEY_START) break;
 
        gfxFlushBuffers();
        gfxSwapBuffers();
 
        gspWaitForVBlank();
    }
 
    gfxExit();
    return 0;
}