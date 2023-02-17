#include<stdio.h>
#include<stdlib.h>
main(){
    int x=5, y=10;
    // uso de ponteiros para lidar com entrada e saída de arquivos, alteração de variáveis
    int *p1, *p2;
    p1 = &x, p2 = &y;
    printf("%d + %d = %d\n", x, y, x+y);
    // para mostrar o endereço de memória dos ponteiros
    printf("Endereco de x e %p, e o endereco de y e %p.\n", p1, p2);
    printf("%d + %d = %d\n", *p1, *p2, *p1+*p2);
    // aqui foi só pq o app dele não rodava, assim ele roda.
    //system("pause");
}