#include<stdio.h>
#include<stdlib.h>

// Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
// teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.

int main(){

    int x, y;
    int *p1, *p2;

    p1 = &x, p2 = &y;

    printf("\nDigite dois numeros inteiros:");
    scanf("%d %d", &x, &y);

    if (*p1 > *p2){
        printf ("O maior endereco e %p do numero %d.", *p1, x);
    } else printf ("O maior endereco e %p do numero %d.", *p2, y);

}
