#include<stdio.h>
#include<stdlib.h>
#define A 5

// Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
// apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada
// valor lido.

int main(){
    int array[A];
    int *ptr = NULL, i;
    ptr = array;

    for (i = 0; i < A; i++){
        ptr = &array[i];
        printf("entre o %d numero:", i);
        scanf("%d", &*ptr);
    }
    for (i = 0; i < A; i++){
        ptr = &array[i];
        printf("O dobro da posicao %d do vetor e %d.\n", i, 2*(*ptr));
    }
}