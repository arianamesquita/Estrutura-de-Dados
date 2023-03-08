#include<stdio.h>
#include<stdlib.h>

// 2 - Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
// exiba o maior endereco.
 
main(){
    int x, *end1;
    int y, *end2;

    end1 = &x, end2 = &y;

    printf ("O endereco de x e %p e o endereco de y e %p", *end1, *end2);

    if (end1 > end2){
        printf ("\nO maior endereco e o de x, %p", *end1);
    } else printf ("\nO maior endereco e o de y, %p", *end2);
}