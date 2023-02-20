#include<stdio.h>
#include<stdlib.h>

// Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
// endereco de cada posicao desse array.

int main(){
    float array[] = {1.2, 2.3, 4.5, 5.6, 7.8, 8.9, 7.4, 8.5, 9.6, 4.1};
    int *ptr = NULL;
    int i;

    for (i = 0; i <= 9; i++){
        ptr = &array[i];
        printf("O endereco da posicao %d = %f = %x.\n", i+1, array[i], *ptr);
    }
}

