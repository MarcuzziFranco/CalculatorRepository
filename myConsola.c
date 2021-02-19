#include "myConsola.h"
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

float suma(float A,float B){ 
return A+B;
}
float resta(float A,float B){
return A-B;
}
float multiplicacion(float A,float B){
return A*B;
}

void setConsoleSize(int width, int heigth){
    
	// Set up the handles for reading/writing:
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    // Change the window title:
    SetConsoleTitle("Calculator in C");
    // Set up the required window size:
    SMALL_RECT windowSize = {0, 0, width, heigth};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    // Change the console window size:
        // Create a COORD to hold the buffer size:
    COORD bufferSize = {10, 10};
    SetConsoleScreenBufferSize(wHnd, bufferSize);
    // Exit
}

int whereX(){
    int x;                                                              //Posicion X                                                                    
    HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);            //Genero el menjador de la consola y lo obtengo.                        
    CONSOLE_SCREEN_BUFFER_INFO cbsi;                                    //Genero el contenedor de la informacion.
    if (GetConsoleScreenBufferInfo(hConsoleOutput, &cbsi))              //Obtengo la informacion pando el manejador de consola y el contendor.                  
    {                                                                       
        return x= cbsi.dwCursorPosition.X;                              //retorno del contenedor la informacion que me interesa.
    }
    else{
        x = 0;                                                          //En caso de falla retorno 0.
        return x;
    }
}

int whereY(){
    int y;                                                              // Posicion Y
    HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);            //Genero el menjador de la consola y lo obtengo.
    CONSOLE_SCREEN_BUFFER_INFO cbsi;                                    //Genero el contenedor de la informacion.
    if (GetConsoleScreenBufferInfo(hConsoleOutput, &cbsi))              //Obtengo la informacion pando el manejador de consola y el contendor
    {
        return y= cbsi.dwCursorPosition.Y;                              //Saco del contenedor la informacion que me interesa. 
    }
    else    
    {
        y = 0;                                                          //En caso de falla retorno 0.
        return y;
    }
}

void gotoXY(int x, int y){

    HANDLE consola = GetStdHandle(STD_OUTPUT_HANDLE);   //genera un manejador de consola y optiene la informacion del archivo de salida.
    COORD pos;                                          //Guarda su posicion.
    pos.X = x;                                          //Setea el X nuevo del cursor.
    pos.Y = y;                                          //Setea el Y nuevo del cursor.

    SetConsoleCursorPosition(consola,pos);
}

