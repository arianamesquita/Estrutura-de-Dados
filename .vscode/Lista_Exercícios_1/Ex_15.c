#include<stdio.h>
#include<stdlib.h>
#define a 10

// Crie uma funcao que receba como parametro um array e o imprima. Nao utilize ındices
// para percorrer o array, apenas aritmetica de ponteiros.

int vetor[a];
int i;
int main(){
    imprimeVetor(vetor);
}
int imprimeVetor(int vetor[]){
    for (i = 0; i < a; i++){
        printf("O indice %d = %d.\n", i, (vetor+i)); //imprimindo o endereço de memória de cada espaço do array. *(vetor+1) imprime zero que é o que consta em cada casa de um vetor int qdo criado.
    }
}