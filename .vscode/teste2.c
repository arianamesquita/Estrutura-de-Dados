#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
    char nome[50];
    int idade;
};
struct turma
{
    int id;
    int sala;  
    struct aluno alunos[5];
};

struct turma ed;

main()
{
    struct aluno pessoa;
    printf ("Digite o nome a seguir: ");
    gets (pessoa.nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Nome: %s e idade: %i", pessoa.nome, pessoa.idade);

    ed.alunos[0].idade = pessoa.idade;
    strcpy(ed.alunos[0].nome, pessoa.nome); //ed.alunos[0].nome = pessoa.nome;
    ed.id = 2023011;
    ed.sala = 0x8;
    
    printf("\n Sala: %d, ID da turma: %d \n Aluno: %s, idade: %d ", ed.sala, ed.id, ed.alunos[0].nome, 
        ed.alunos[0].idade);

    
}