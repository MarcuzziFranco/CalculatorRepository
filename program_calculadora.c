#include <stdio.h>
#include <stdlib.h>
#include "myConsola.h"
#include "Draw.h"

//Definiciones base mascara 
int number;

int main()
{
	
	//printf("%f\n",suma(2,5));
 	setConsoleSize(40,30);
 	//gotoXY(25,15);
 	//printf("%s","Centro");

 	//gotoXY(2,2);

 	//px,py,colums,rows,cornersG,sidesG,fillG.
 	drawRect(1,1,38,28,201,187,200,188,205,186,32);
 	drawRect(4,3,32,3,201,187,200,188,205,186,32);
 	scanf("%d", &number);
	return 0;
}