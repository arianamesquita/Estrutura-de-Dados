#include<stdio.h>
#include<stdlib.h>

// Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao
// que retorne a soma do dobro dos dois numeros lidos. A funcao devera armazenar o dobro
// de A na propria variavel A e o dobro de B na propria variavel B.

int *p1, *p2;

int main(){
    int a = 2, b = 7, soma = 0;
    p1 = &a, p2 = &b;
    soma = somaDobro(*p1, *p2, soma);
    printf("As variaveis sao %d e %d, sendo entao a soma do dobro das variaveis %d.", *p1, *p2, soma);
}

int somaDobro(int a, int b, int soma){
    a = 2*a;
    b = 2*b;
    soma = a + b;
    return soma;
}