#include<stdio.h>
#include<stdlib.h>

// Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes
// 2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
// segunda variavel. Escreva o conteudo das 2 variaveis na tela.

int *p1, *p2;

int main(){
    int x = 17, y = 13, maior = 0;
    p1 = &x, p2 = &y;
    maior = maiorValor(*p1, *p2, maior);
    printf("O maior valor e %d.", maior);
}

int maiorValor(int a, int b, int c){
    if (a > b){
        c = a;
    } else c = b;
    return c;
} 