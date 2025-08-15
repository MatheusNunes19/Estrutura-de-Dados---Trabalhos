#include "ListaSequencial.h"

struct lista {
    int qtd;
    struct aluno dados[MAX];
};

Lista* cria_lista() {
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL)
        li->qtd = 0;
    return li;
}

void libera_lista(Lista* li) {
    free(li);
}

int tamanho_lista(Lista* li){
    return (li != NULL) ? li->qtd : -1;
}

int insereNoFim(Lista* li, struct aluno alu){
    if(li == NULL || li->qtd == MAX) return 0;
    li->dados[li->qtd] = alu;
    li->qtd++;
    return 1;
}

int consultaMatricula(Lista* li, int matricula, struct aluno *alu)
{
    if(li == NULL) return 0;
    for(int i = 0; i < li->qtd; i++){
        if (li->dados[i].matricula == matricula) {
            *alu = li->dados[i]; // Retorna os dados do aluno
            return 1;
        }
    }
    return 0;
}

void imprime_lista(Lista* li){
    if(li == NULL || li->qtd == 0){
        printf("Lista vazia!\n");
        return;
    }
    printf("\n=== ALUNOS NA LISTA ===\n");
    for(int i = 0; i < li->qtd; i++){
        printf("Matricula: %d\n", li->dados[i].matricula);
        printf("Nome: %s\n", li->dados[i].nome);
        printf("Notas: %.1f, %.1f, %.1f\n\n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
    }
}