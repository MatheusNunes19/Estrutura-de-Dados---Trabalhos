#include "ListaSequencial.h"
#include "ListaSequencial.c"
#include <stdio.h>

int main() {
    Lista *li = cria_lista();
    if(li == NULL){
        printf("Erro ao criar lista\n");
        return 1;
    }

    // Cadastra alguns alunos de exemplo
    struct aluno a1 = {123, "João Silva", 8.5, 7.0, 9.0};
    struct aluno a2 = {456, "Maria Souza", 9.0, 8.5, 10.0};
    struct aluno a3 = {789, "Carlos Oliveira", 6.5, 7.5, 8.0};

    // Insere os alunos na lista
    insereNoFim(li, a1);
    insereNoFim(li, a2);
    insereNoFim(li, a3);

    imprime_lista(li);

    int matricula_busca = 456;
    struct aluno aluno_busca;
    if(consultaMatricula(li, matricula_busca, &aluno_busca)){
        printf("\nAluno encontrado: %s\n", aluno_busca.nome);
    } else{
        printf("\nMatricua %d não encontrada\n", matricula_busca);
    }
    

    // Libera a memória alocada
    libera_lista(li);
    return 0;
}