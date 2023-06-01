#include <stdio.h>
#include "funciones.h"


int main(){

    printf("incerte punto 0\n");
    printf("incerte x\n");
    float x0= puntos();
    printf("incerte y\n");
    float y0= puntos(); 
    printf("incerte z\n");
    float z0= puntos();

    printf("incerte punto 1\n");
    printf("incerte x\n");
    float x1= puntos();
    printf("incerte y\n");
    float y1= puntos();
    printf("incerte z\n");
    float z1= puntos();

    printf("incerte punto 2\n");
    printf("incerte x\n");
    float x2= puntos();
    printf("incerte y\n");
    float y2= puntos();
    printf("incerte z\n");
    float z2= puntos();

    float base= largo(x0, y0, z0, x1, y1, z1);
    float altura=largo(x0, y0, z0, x2, y2, z2);

    areasu(base,altura);
    volumen(base, altura);

    return 0;
}


