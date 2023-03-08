#include<stdio.h>
#include<stdlib.h>

// Faca um programa que leia tres valores inteiros e chame uma funcao que receba estes 3
// valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel,
// o segundo menor valor na variavel do meio, e o maior valor na ultima variavel. A funcao
// deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes.
// Exibir os valores ordenados na tela.

int main(){
    int a = 13;
    int b = 2;
    int c = 8;

    ordenar(a, b, c);
}

int ordenar(int a, int b, int c){
    int array[3] = {a, b, c};
    int i, j;
    for (i = 0; i < 3; i++){
        for (j = i; j < 3; j++){
            if (array[i] > array[j]){
                int temp = array [i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }    
    for (i = 0; i < 3; i++){
        printf ("o elemento %d do vetor e %d.\n", i, array[i]);
    }
}   