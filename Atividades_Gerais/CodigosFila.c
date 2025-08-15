#include <stdio.h>
#include <stdlib.h>
#define boolean int
#define TRUE 1
#define FALSE 0

typedef struct elem {
    int info;
    struct elem *lig;
} tipo_elem;

typedef struct{
    tipo_elem *inicio;
    tipo_elem *fim;
} fila;

// cria fila vazia com dois ponteiros
void create(fila *q) {
    q->inicio = NULL;
    q->fim = NULL;
}

// testa se q está vazia
boolean isEmpty (fila *q) {
    return (q->inicio == NULL);
}

// imprime q
void imprime(fila *q) {

    //usando um ponteiro auxiliar
    tipo_elem *x;
    x = q->inicio;

    //iterando na pilha
    while(x != NULL) {
        printf("%d ", x->info);
        x = x->lig;
    }
    printf("\n");
}

// insere x no fim de q
boolean enqueue(fila *q, int x) {

    tipo_elem *p = malloc(sizeof(tipo_elem));
    if(p == NULL)
        return FALSE;

    p->info = x;
    p->lig = NULL;
    
    if(isEmpty(q)) {
        q->inicio = p;
    } else {
        q->fim->lig = p;
    }

    q->fim = p;
    return TRUE;
}

// remove do topo de q
boolean dequeue(fila *q) {

    tipo_elem *p;
    if (isEmpty(q)) {
        return FALSE;
    }

    p = q->inicio;
    q->inicio = p->lig;

    if(q->inicio == NULL) {
        q->fim = NULL;
    }

    free(p);
    return TRUE;
}

int main() {

    //cria fila
    fila q;
    create(&q);
    printf("%d\n", isEmpty(&q));

    //enfileira
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);
    imprime(&q);

    //desenfileira
    dequeue(&q);
    dequeue(&q);

    //imprime fila
    imprime(&q);

    return 0;
}