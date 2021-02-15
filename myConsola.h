#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#ifndef myConsola
#define myConsola


HANDLE wHnd;    // Handle to write to the console.
HANDLE rHnd;

float suma(float A,float B); 
float resta(float A,float B);
float multiplicacion(float A,float B);

void setConsoleSize(int width, int heigth);
int whereX();
int whereY();
void gotoXY(int x, int y);

#include "myConsola.c"

#endif