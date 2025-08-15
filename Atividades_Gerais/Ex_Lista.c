#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista Lista;
typedef struct listano ListaNo;

struct lista{
    ListaNo* prim;
};

struct listano{
    int item;
    ListaNo* prox;
    ListaNo* anterior;
};

Lista* cria(void){
    Lista* l = (Lista*)malloc(sizeof(Lista));
    l->prim = NULL;

    return l;
}

void criaNo(Lista* l, int i){
    ListaNo* novo = (ListaNo*) malloc(sizeof(ListaNo));
    novo->item = i;
    novo->prox = l->prim;  // faz o novo nó apontar para o antigo primeiro elemento
    l->prim = novo;   // atualiza o inicio da lista para o novo
}

int busca(Lista* l, int i){
    for(ListaNo* p = l->prim; p != NULL; p = p->prox){
        if(p->item == i){
            return 1;
        }
    }
    return 0;
}

void imprime(Lista* l){  // AQUI VAI IMPRIMIR, MEIO OBVIO MAS VOCE VAI ESQUECER AMANHA  
    if(l == NULL){
        printf("Lista invalida\n");
        return;
    }
    printf("\n");

    for(ListaNo* p = l->prim; p != NULL; p = p->prox){
        printf("%d\n", p->item);  
    }

}

int vazia(Lista* l){
    return (l->prim == NULL);
}

void liberarLista(Lista* l){
    ListaNo* p = l->prim;
    while (p != NULL){
        ListaNo* t = p->prox;
        free(p);
        p = t;
    }
    l->prim = NULL;
}

void excluirElemento(Lista* l, int e){

    ListaNo* ant = NULL;
    ListaNo* p = l->prim;

    while(p != NULL && p->item != e){
        ant = p;
        p = p->prox;
    }

    if(p != NULL){
        if (ant == NULL){
            l->prim = p->prox;
        }else{
            ant->prox = p->prox;
        }
        free(p);
    }
}

void ColocaNoFim(Lista* l, int valor){
    ListaNo* novo = (ListaNo*) malloc(sizeof(ListaNo));
    novo->item = valor;
    novo->prox = NULL;

    if(l->prim == NULL){
        l->prim = novo;
    } else{
        ListaNo* p = l->prim;  // inicia p

        while(p->prox != NULL){  // isso percorre até o penultimo no
            p = p->prox;            
        }
        p->prox = novo;
    }
}
// agora sim, vamos fazer os comandos:
void removeFim(Lista* l){
    if(l->prim == NULL){
        printf("Lista vazia.");
    }
    ListaNo* p = l->prim;
    ListaNo* anterior = NULL;

    while(p->prox != NULL){
        anterior = p;
        p = p->prox;
    }
    
    int valor_removido = p->item;

    if(anterior == NULL){  // se tiver so um no
        l->prim = NULL;
    } else{  // se tiver mais 
        anterior->prox = NULL;

    }
    free(p);
    printf("%d\n", valor_removido);
    // só no final libera e imprime o valor
}

void removeInicio(Lista* l){
    if(l->prim == NULL){
        printf("Lista vazia.");
        return;
    }
    int valor_removido = l->prim->item;
    ListaNo* tempo = l->prim;
    l->prim = l->prim->prox;
    free(tempo);

    printf("%d\n", valor_removido);  // aqui imprime o valor que foi removido antes
}

void insereInicio(Lista* l, int valor){
    ListaNo* novo_no = (ListaNo*) malloc(sizeof(ListaNo));
    novo_no->item = valor;  // coloca os dados no novo no
    novo_no->prox = l->prim;  // o proximo do novo no sera o primeiro elemento da lista atual
    novo_no->anterior = NULL;

    if(l->prim != NULL){
        l->prim->anterior = novo_no;
    }

    l->prim = novo_no;

}


int main(void){
    Lista* lista = cria();
    char comando;
    int valor;

    while(1){
        scanf(" %c", &comando);

        switch (comando)        {
        case 'I':
            scanf("%d", &valor);
            insereInicio(lista, valor);
            break;

        case 'F':
            scanf("%d", &valor);
            ColocaNoFim(lista, valor);
            break;

        case 'P':
            removeFim(lista);
            break;

        case 'D':
            removeInicio(lista);
            break;

        case 'X':
            imprime(lista);
            printf("\n");
            liberarLista(lista);
            return 0;

        default:
            // printf("Comando invalido.");
            break;
        }
    }
    return 0;
}
