#include<stdio.h>
#include<stdlib.h>

// 1 - Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
// real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
// cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a
// modificacao.
int main(){
    int i = 1, *p1 = 0;
    float j = 5.0, *p2 = 0;
    char c = 'a', *p3 = NULL;

    p1 = &i, p2 = &j, p3 = &c;

    printf("Os dados de entrada foram: %d, %f, %c.", *p1, *p2, *p3);

    printf("\nDigite um número inteiro, um real e uma letra:");
    scanf("%d %f %c", &*p1, &*p2, &*p3);

    printf("\nOs dados alterados pelos ponteiros são: %d, %f, %c.", *p1, *p2, *p3);
}

