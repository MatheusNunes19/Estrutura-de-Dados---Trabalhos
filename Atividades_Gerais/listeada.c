#include <stdio.h>
#include <stdlib.h>

// struct para um item da lista que possui um inteiro
struct ElementoLista{
    int valor;
    struct ElementoLista *prox;
};

// define um novo tipo de dados(item)
typedef struct ElementoLista Item;

// prototipos
void imprime(Item *cabeca);
void insereFim(Item* cabeca, int valor);
void libera(Item* cabeca);

int main(int argc, char *argv[]){
    Item cabeca; // cria cabeca da lista
    cabeca.prox = NULL; // vazia, nao aponta pra nada

    // insere o tamanho de um item em bytes
    printf("Tamanho do item: %d bytes\n", sizeof(Item));

    // insere ao final da lista um item alocado dinamicamente
    printf("\nInserido itens novos na lista...\n");
    insereFim(&cabeca, 15);
    insereFim(&cabeca, 125);
    insereFim(&cabeca, 155);

    // aguarda o usuario pressionar uma tecla
    system("PAUSE");

    // uma função para imprimir os itens da lista
    printf("\nImprimindo itens da lista...\n");
    imprime(&cabeca);

    // aguarda o usuario pressionar uma tecla
    system("PAUSE");

    // uma função para liberar a memoria
    printf("\nLiberando memoria dos itens da lista...\n");
    libera(&cabeca);

    system("PAUSE");
    return 0;
}

void insereFim(Item* cabeca, int valor){
    // cria um ponteiro para novo item e aloca dinamicamente
    Item *novo = (Item*)malloc(sizeof(Item));

    // inicializa o novo item
    novo->prox = NULL;              // se torna o ltimo da lista
    novo->valor = valor;            // conteudo da lista

    printf("Item de valor %3d alocado no endereco: %p\n", novo->valor, novo);

    // varre a lista do comeco para chegar na ultima posicao
    Item *atual = cabeca;
    while(atual->prox!=NULL){
        atual = atual->prox;
    }

    // chegando na ultima posicao, coloca o ponteiro pro
    atual->prox = novo;
}

// função para imprimir 
void imprime(Item*  cabeca){
    // este item aponta para o item atual sendo impresso
    // como o item do inicio e a cabeca, a impressao comeca no proximo
    Item *atual = cabeca->prox;

    // laco que executa ate o ultimo
    int i = 0;
    while(atual!=NULL){
        printf("Valor do item: %3d\n", atual->valor);
        i++;
        // faz a atual mover para o proximo item
        atual = atual->prox;
    }

    printf("Total de itens na lista: %d\n", i);
}

void libera(Item* cabeca){
    // ponteiro para o inicio da lista
    Item *atual = cabeca->prox;

    // ponteiro para o item liberado
    Item *liberado;

    // parte do inicio da lista eliminando todos os itens
    while(atual!=NULL){
        // o liberado recebe o endereco a ser liberado
        liberado = atual;
        // o atual recebe o endereco do proximo a ser liberado
        atual = atual->prox;
        printf("Liberando o item de valor %3d na posicao %p\n", liberado->valor, liberado);
        // libera o atual
        free(liberado);
    }
}