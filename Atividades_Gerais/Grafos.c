#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// Estrutura do grafo
typedef struct{
    int matriz_adj[MAX_VERTICES][MAX_VERTICES]; // dois pra i e j
    int num_vertices;
} Grafo;

// comeca o grafo
void iniciaGrafo(Grafo *g, int vertices){
    g->num_vertices = vertices;
    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < vertices; j++){
            g->matriz_adj[i][j] = 0;
        }
    }
}

// add uma aresta não direcionada
void addAresta(Grafo *g, int origem, int destino){
    if(origem >= 0 && origem < g->num_vertices && destino >= 0 && destino < g->num_vertices){
        g->matriz_adj[origem][destino] = 1;
        g->matriz_adj[destino][origem] = 1;  // tira essa linha e vira grafo direcionado
    }
}

// impreme a matriz de adj
void imprime_grafo(Grafo *g){
    printf("Matriz de Adjacencia:\n");
    for(int i = 0; i < g->num_vertices; i++){
        for( int j = 0; j < g->num_vertices; j++){
            printf("%d ", g->matriz_adj[i][j]);
        }
        printf("\n");
    }
}

int main(){
    Grafo g;
    int vertices = 5;

    iniciaGrafo(&g, vertices);

    addAresta(&g, 0, 1); // 0 ↔ 1
    addAresta(&g, 0, 4); // 0 ↔ 4
    addAresta(&g, 1, 2); // 1 ↔ 2
    addAresta(&g, 1, 3); // 1 ↔ 3 
    addAresta(&g, 1, 4); // 1 ↔ 4
    addAresta(&g, 2, 3); // 2 ↔ 3
    addAresta(&g, 3, 4); // 3 ↔ 4

    imprime_grafo(&g);

    return 0;
}