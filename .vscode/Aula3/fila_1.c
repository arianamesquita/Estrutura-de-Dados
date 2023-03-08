// implementação de fila com vetor de tamanho finito
#include <stdio.h>
#include <stdlib.h>
#define T 100

/* criar a fila
inserir dados na fila
remover dados da fila
consultar dados na fila 
(também verificar se a fila está vazia)
*/

int quant;
int *inicio, *fim;

int main(void){
    // CRIAR A FILA
    
    int fila[T], dado;
    inicio = fila; // inicio recebe &fila[0]
    fim = fila;
    quant = 0; // em c vai usar 1 para verdadeiro e 0 para falso

    printf("\n IMPLEMENTACAO DE FILA PARA NUMEROS INTEIROS>>>>");
    while (1){
        printf("Escolha uma opcao no menu: ");
        printf("\n 1 - Armazenar \n 2 - Recuperar \n 3 - Visualizar \n 4 - Sair ");
        printf("\n -> ");
        scanf("%d", &dado);
    }
    

}

// INSERIR DADOS NA FILA
int* insere(int *fim, int x){
    *fim = x;
    quant++;
    fim++;
    return fim;
}

// REMOVER DADOS NA FILA
int retira(int *fim){
    int numeroTemp;
    quant--;
    numeroTemp = *inicio;
    inicio++;
    return numeroTemp;
}

// VERIFICA SE A FILA ESTÁ VAZIA
int estaVazio(){
    if (*inicio == fim && quant == 0){
        return 1;
    } else return 0;
}

int estaCheio(){
    if (quant == T) return 1;
    else return 0;
}

// CHECAR FILA
int checar(int *fila){
    int i = 0;
    printf("\n Elementos da fila - do mais novo para o mais antigo: ");
    for (i = 0; i < T; i++){
        printf("%d, ", *(fila+i));
    }
    printf("\n %d Elementos \n", quant);
    return quant;
}