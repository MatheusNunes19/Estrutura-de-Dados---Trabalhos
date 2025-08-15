#include <stdio.h>
#include <stdlib.h>
#include <string.h>>

struct NoArvre{
    int valor;
    struct NoArvre* Filho_ESQ;
    struct NoArvre* Filho_DIR;
};

struct NoArvre* criarNo(int valor){
    struct NoArvre* no = (struct NoArvre*)malloc(sizeof(struct NoArvre));
    no->valor = valor;
    no->Filho_ESQ = NULL;
    no->Filho_DIR = NULL;
    return no;
}

// insere
struct NoArvre* colocaNo(struct NoArvre* raiz, int valor){
    if(raiz == NULL){
        return criarNo(valor);  // se raiz for nulo, arvore vazia entao cria outro no
    }
    // se nao comparamos valor do no e a raiz e decidimos se inserimos a esq ou dir
    if(valor < raiz->valor){
        raiz->Filho_ESQ = colocaNo(raiz->Filho_ESQ, valor);
    } else if(valor > raiz->valor){
        raiz->Filho_DIR = colocaNo(raiz->Filho_DIR, valor);
    }

    return raiz;
}

// excluir parte chata]
struct NoArvre* cortarNo(struct NoArvre* raiz, int valor){
    if(raiz == NULL){
        return raiz;
    }

    if(valor < raiz->valor){ // Se o valor for menor, esquerda
        raiz->Filho_ESQ = cortarNo(raiz->Filho_ESQ, valor);
    } else if(valor > raiz->valor){ // Se o valor for menor, direita
        raiz->Filho_DIR = cortarNo(raiz->Filho_DIR, valor);
    } else{
        if(raiz->Filho_ESQ == NULL){
            struct NoArvre* tempo = raiz->Filho_ESQ;
            free(raiz);
            return tempo;
        } else if(raiz->Filho_DIR == NULL){
            struct NoArvre* tempo = raiz->Filho_ESQ;
            free(raiz);
            return tempo;
        }

        struct NoArvre* tempo = raiz->Filho_DIR;
        while(tempo && tempo->Filho_ESQ != NULL){
            tempo = tempo->Filho_DIR;
        }
        
        raiz->valor = tempo->valor;

        raiz->Filho_DIR = cortarNo(raiz->Filho_DIR, tempo->valor);
    }

    return raiz;
}

// travessia preordem (A ordem so altera como sera procuradas)
void preOrdem(struct NoArvre* raiz){
    if(raiz != NULL){
        printf("%d ", raiz->valor);
        preOrdem(raiz->Filho_ESQ);
        preOrdem(raiz->Filho_DIR);
    }
}

// pesquisa por elementos
struct NoArvre* CadeElemento(struct NoArvre* raiz, int valor){
    if(raiz == NULL || raiz->valor == valor){
        return raiz;
    }

    if(valor< raiz->valor){
        return CadeElemento(raiz->Filho_ESQ, valor);
    } else{
        return CadeElemento(raiz->Filho_DIR, valor);
    }
}

int main(){
    struct NoArvre* raiz = NULL;

    raiz = colocaNo(raiz, 10);
    raiz = colocaNo(raiz, 5);
    raiz = colocaNo(raiz, 15);
    raiz = colocaNo(raiz, 3);
    raiz = colocaNo(raiz, 7);
    raiz = colocaNo(raiz, 13);
    raiz = colocaNo(raiz, 18);

    printf("Em ordem: ");
    preOrdem(raiz);
    printf("\n");
    
    return 0;
}