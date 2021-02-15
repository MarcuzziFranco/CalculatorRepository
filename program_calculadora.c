#include <stdio.h>
#include "myConsola.h"


int main()
{
	printf("%s\n","Mensaje consola");
	printf("%f\n",suma(2,5));
 	setConsoleSize(50,30);
 	gotoXY(25,15);
 	printf("%s","Centro" );
 	
	return 0;
}