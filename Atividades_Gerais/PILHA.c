#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_PILHA 20

// guarda nossa pilha
typedef struct{
    int vetor[TAMANHO_PILHA]; // tamae da pilha
    int topo;
} Pilha;

// prototipos
void empilha(int valor, Pilha *pilha);
void desempilha(Pilha *pilha);
int Cheia(Pilha *pilha);
int Vazia(Pilha *pilha);


// declaracao da função
void empilha(int valor, Pilha *pilha){
    if(pilha->topo < TAMANHO_PILHA){  // testa se tem espaco
        // empilhar
        pilha->vetor[pilha->topo] = valor;
        pilha->topo++;
    } else{
        printf("Nao ha mais espaco na pilha.\n");
    }
}

void desempilha(Pilha *pilha){
    // testa se a pilha não esta vazia
    if(pilha->topo > 0){
        // desempilha
        pilha->topo--;  // decresce
        printf("Elemento retirado: %d\n", pilha->vetor[pilha->topo]);
    } else{
        // pilha vazia
        printf("A pilha esta vazia.\n");
    }
}

int Cheia(Pilha *pilha){
    if(pilha->topo == TAMANHO_PILHA){
        return 1;
    } else{
        return 0;
    }
}

int Vazia(Pilha *pilha){
    if(pilha->topo == 0){
        return 1;
    } else{
        return 0;
    }
}

void imprime(Pilha *pilha){
    int i;
    for(i = pilha->topo - 1; i >= 0; i--){
        printf("%2d\n",pilha->vetor[i]);
    }
}

int main(int argc, char *argv[]){
    Pilha p;  // declara pilha 
    p.topo = 0; 

    empilha(5, &p);  // um
    empilha(2, &p);  // dois
    empilha(6, &p);  // quatro
    empilha(9, &p);  // cinco
    empilha(50, &p);  // seis

    desempilha(&p);

    printf("Topo da pilha: %d\n", p.topo);

    imprime(&p);

    return 0;
}