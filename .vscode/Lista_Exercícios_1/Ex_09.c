#include<stdio.h>
#include<stdlib.h>

// Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
// Imprima o endereco de cada posicao dessa matriz.

int main(){
    float matriz[3][3] = {1.2, 2.3, 4.5, 5.6, 7.8, 8.9, 7.4, 8.5, 9.6};
    int *ptr = NULL;
    int i, j;

    for (i = 0; i <= 2; i++){
        for ( j = 0; j < 3; j++){
            ptr = &matriz[i][j];
            printf("O endereco da posicao %f = %x.\n", matriz[i][j], *ptr);
        }
    }
}