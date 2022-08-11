#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <conio.h>  //acrescenta a conio.

//----------------------------------------------------------

enum DOS_COLORS {
	
	BLACK,BLUE,GREEN,CYAN,RED,MAGENTA,BROWN,
	LIGHT_GRAY,DARK_GRAY,LIGHT_BLUE,LIGHT_GREEN,LIGHT_CYAN,
	LIGHT_RED,LIGHT_MAGENTA,YELLOW,WHITE};
	
}; //ARRAY ENUMERADA COM OS NOMES DAS CORES QUE PODEM SER USADAS NO PROMPT

//-----------------------------------------------------------
void textcolor(DOS_COLORS iColor)
{
	HANDLE h1 = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO bufferinfo;
	BOOL b = GetConsoleScreenBufferInfo(h1,&bufferinfo);
	bufferInfo.wAttributes &= 0x00F0;
	SetConsoleTextAttribute
}

