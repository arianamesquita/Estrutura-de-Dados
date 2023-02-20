#include<stdio.h>
#include<stdlib.h>

// Crie um programa que contenha uma funcao que permita passar por parametro dois
// numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e
// armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno, mas devera
// modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal.

int *p1;

int main(){
    int a = 5, b = 7;
    soma(a, b);

    printf("A soma de %d e %d = %d.", a, b, *p1);
}

int soma(int a, int b){
    p1 = &a;
    a = a + b;
}