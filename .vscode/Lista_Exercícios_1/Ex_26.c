#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Implemente baskara

int raizes(float A,float B,float C,float *X1,float *X2);
int main(){
    float v1 = 0.0f, v2 = 0.0f;
    int nr;
    nr = raizes(1, 3, -4, &v1, &v2);
    printf("Existem %d raizes reais.\n", nr);
    printf("O X1 = %0.2f e o X2 = %0.2f.", v1, v2);
}

int raizes(float A,float B,float C,float *X1,float *X2){
    float delta = pow(B,2) - 4*A*C;
    if (delta < 0) return 0;
    else if (delta == 0){
        *X1 = (-B + sqrt(delta))/2*A;
        *X2 = (-B - sqrt(delta))/2*A;
        return 1;
    } else {
        *X1 = (-B + sqrt(delta))/2*A;
        *X2 = (-B - sqrt(delta))/2*A;
        return 2;
    }
}