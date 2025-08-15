#ifndef LISTA_SEQUENCIAL_H
#define LISTA_SEQUENCIAL_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct lista Lista;

Lista* cria_lista();

void libera_lista(Lista* li);


//primeiro prototipo...
int insereNoFim(Lista* li, struct aluno alu);
int consultaMatricula(Lista* li, int matricula, struct aluno *a);

void imprime_lista(Lista* li);

#endif