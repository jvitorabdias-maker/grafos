#include <stdio.h>
 
#define V 5

//INICIANDO O GRAFO
void inicializarGrafo(int grafo[V][V]) {
    for (int i = 0; i< V; i++){
        for (int j = 0; j < V; j++) {
            grafo[i][j] = 0;
        }
    }
}

//ADICIONANDO ARESTA
void adicionarAresta(int grafo[V][V], int origem, int destino){
    grafo[origem][destino] = 1;
    grafo[destino][origem] = 1;
}

//IMPRIMINDO O GRAFO
void imprimirGrafo(int grafo[V][V]) {
    printf ("Matriz de Adjacencia:\n\n");
 
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++) {
            printf("%d", grafo[i][j]);
        }
        printf("\n");
    }
}
 
int main (){
    int grafo[V][V];
 
    inicializarGrafo(grafo);
 
    adicionarAresta(grafo, 0,1);
    adicionarAresta(grafo, 0,4);
    adicionarAresta(grafo, 1,2);
    adicionarAresta(grafo, 1,3);
    adicionarAresta(grafo, 1,4);
    adicionarAresta(grafo, 2,3);
    adicionarAresta(grafo, 3,4);
 
    imprimirGrafo(grafo);
 
    return 0;
}