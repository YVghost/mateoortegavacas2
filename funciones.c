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

void areasu (float base,float altura){
    float hipotenusa = sqrt((pow(base,2)+(pow(altura,2))));
    float area= (pi*base*hipotenusa); 
    printf("El area superficial es %f\n",area);
}

void volumen(float base,float altura){
    float volumen = ((pi)*(pow(base,2)*altura))/3;
    printf("El volumen es %f\n",volumen);
    
}