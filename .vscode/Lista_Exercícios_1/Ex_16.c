#include<stdio.h>
#include<stdlib.h>

// Considere a seguinte declaracao: int A, *B, **C, ***D; Escreva um programa que leia a
// variavel a e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas
// os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
// o quadruplo.

int main(){
    int A, *B, **C, ***D;

    printf("\nEntre com um numero inteiro:");
    scanf("%d", &A);
    B=&A, C=&B, D=&C;
    printf("\nO numero e: %d, \nseu dobro: %d, \nseu triplo: %d, \nseu quadruplo: %d.\n", A, *B*2, **C*3, ***D*4);
}