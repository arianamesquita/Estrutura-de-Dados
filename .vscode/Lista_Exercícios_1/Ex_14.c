#include<stdio.h>
#include<stdlib.h>
#define a 5

// Crie uma funcao que receba dois parametros: um array e um valor do mesmo tipo do
// array. A funcao devera preencher os elementos de array com esse valor. Nao utilize
// ındices para percorrer o array, apenas aritmetica de ponteiros.

int vetor[a];
int i;
int main(){
    int valor = 7;

    preencheVetor(vetor, valor);
    imprimeVetor(vetor);
}
int preencheVetor(int vetor[], int valor){
    for (i = 0; i < a; i++){
        *(vetor+i) = valor;
    }
}
int imprimeVetor(int vetor[]){
    for (i = 0; i < a; i++){
        printf("O indice %d = %d.\n", i, *(vetor+i));
    }
}