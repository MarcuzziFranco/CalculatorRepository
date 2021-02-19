#include <stdlib.h>
#include <stdio.h>
#include "myConsola.h"

#ifndef Draw
#define Draw


void drawRect(int posX,int posY,int width,int heigth,
			  char gCornerA,char gCornerB,
			  char gCornerC,char gCornerD,
			  char gWidth,char gHeigth,char gFill);

#include "Draw.c"

#endif