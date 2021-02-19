#include "Draw.h"
#include <stdlib.h>
#include <stdio.h>

void drawRect(int posX,int posY,int width,int heigth,
			  char gCornerA,char gCornerB,
			  char gCornerC,char gCornerD,
			  char gWidth,char gHeigth,char gFill){


	for(int  row = 0; row < heigth; row++){ 
		gotoXY(posX,posY+row);
		for (int colum = 0;colum < width; colum++){		

			if(colum == 0 && row == 0){
				printf("%c",gCornerA);
			}else if(colum == width-1 && row == heigth-1){
				printf("%c",gCornerD);
			}else if(colum == 0 && row == heigth-1){ 
				printf("%c",gCornerC);
			}else if(colum == width-1 && row == 0){ 
				printf("%c",gCornerB);
			}else if(colum == 0 || colum == width-1){
				printf("%c",gHeigth); 
			}else if(row == 0 || row == heigth-1){
				printf("%c",gWidth);
			}else{
				printf("%c",gFill);
			}

		}
		printf("\n");
		
	}
}