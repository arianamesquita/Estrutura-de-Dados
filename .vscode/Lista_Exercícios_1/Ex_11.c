#include<stdio.h>
#include<stdlib.h>

// Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
// do teclado e imprima o endereco das posicoes contendo valores pares.

int main(){
    int array[5], i;
    int *ptr = NULL;

    for (i = 0; i < 5; i++){
        printf("digite o elemento da posicao %d: ", i);
        scanf("%d", &array[i]);
    }
    ptr = array;
    for (i = 0; i < 5; i++){
        ptr = &array[i];
        if (*ptr % 2 == 0){
            printf("o endereco da posicao par %d e %p.\n", *ptr, ptr);
        }
    }
    
    
}