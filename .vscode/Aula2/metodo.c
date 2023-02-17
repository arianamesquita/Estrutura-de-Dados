#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int soma(); //colocando aqui em cima pq em c o main tem que vir antes do método.
int somar(); // referência
int percorrerVetor(int *v, int t);
int imprimeVetor(int*v, int t);

main(){
    int a = 5, b = 10, i, j;
    int vetor[10], matriz[5][2];

    percorrerVetor(vetor,10);
    percorrerVetor(matriz[0],10);
    soma(5,10);
    printf("%d + %d = %d\n", a, b, a+b);
    somar(&a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    for (i = 0; i < 10; i++){
        printf("Valor posicao %d = %d\n", i, vetor[i]);
    };
    for (i = 0; i < 5; i++){
        for (j = 0; j < 2; j++){
            printf("Valor posicao vetor %d = %d\n", i, matriz[i][j]);
        }
    };
    imprimeVetor(vetor, 20);
}

int soma(int x, int y){
    x = 6;
    y = 7;
    printf("%d + %d = %d\n", x, y, x+y);
    // para mostrar o endereço de memória dos ponteiros
    // aqui foi só pq o app dele não rodava, assim ele roda.
    //system("pause");
}

int somar(int *p1, int *p2){
    *p1 = 10, *p2 = 20;
    printf("Endereco de x e %p, e o endereco de y e %p.\n", p1, p2);
    printf("%d + %d = %d\n", *p1, *p2, *p1+*p2);
}

int percorrerVetor(int *v, int t){
    int i;
    for (i = 0; i < t; i++){
        *(v + i) = i * 2;
    }
}

int imprimeVetor(int *v, int t){
    int i;
    for (i = 0; i < t; i++){
        printf("Valor %d = %d\n", i+1, *(v+i));
    }
}