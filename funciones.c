#include <stdio.h>
#include <math.h>
#define pi 3,14


float puntos(){
float x;
scanf("%f",&x);
    return x;
}

float largo(float x1, float y1, float z1, float x2, float y2, float z2){
    float dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return dist;
}

void areasu (float base,float altura, float x1, float y1, float z1, float x2, float y2, float z2){
    float hipotenusa = largo(x1, y1, z1, x2, y2, z2);
    float area= (pi*base*hipotenusa); 
    float areab=(pi*pow(base,2));
    printf("El area superficial es %f\n",area + areab);
}

void volumen(float base,float altura){
    float volumen = ((pi)*(pow(base,2))*altura)/3;
    printf("El volumen es %f\n",volumen);
    
}