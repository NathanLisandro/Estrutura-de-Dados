//Para inserir uma nova rua entre duas interseções em um grafo representado por uma matriz de adjacências, 
//basta atualizar o valor na matriz correspondente à nova aresta. Este valor pode representar a distância,
//tempo de viagem, ou qualquer outro peso relevante. A matriz de adjacências é uma matriz quadrada onde o elemento graph[i][j] 
//é diferente de zero se houver uma aresta entre os nós i e j.

#include <stdio.h>

#define V 5

void inserirRua(int graph[V][V], int u, int v, int peso) {
    graph[u][v] = peso;
    graph[v][u] = peso;
}

void printGraph(int graph[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    inserirRua(graph, 0, 2, 4);

    printGraph(graph);

    return 0;
}
