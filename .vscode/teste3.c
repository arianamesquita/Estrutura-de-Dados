#include<stdio.h>
#include<stdlib.h>

main(){
    //criando ponteiro
    int *p;
    int i = 0xFACA;
    p = &i;
    // &coloca endereço de memória
    printf("valor de i: %d \n através do ponteiro: %d \n valor do endereço de memória: %d", i, *p, p);
}