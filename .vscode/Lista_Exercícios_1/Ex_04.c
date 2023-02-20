#include<stdio.h>
#include<stdlib.h>

// Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas
// 2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas
// variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B
// tera o valor de A.

int *p1, *p2;

int main(){
    int x = 15, y = 20;
    p1 = &x, p2 = &y;
    trocaValor(*p1, *p2);
    printf("O valor de x e: %d e o valor de y e: %d.", *p1, *p2);
}

int trocaValor(int a, int b){
    p1 = &b, p2 = &a; // trocando apontamento.
}