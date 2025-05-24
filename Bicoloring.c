#include <stdio.h>

#include <stdbool.h>



#define MAX_NODES 200



int graph[MAX_NODES][MAX_NODES]; // Adjacency matrix to represent the graph

int color[MAX_NODES]; // Array to store color assignments for each node



bool isBicolorable(int n) {

    for (int i = 0; i < n; i++) {

        if (color[i] == -1) { // If node is uncolored, try to color it

            color[i] = 0; // Assign color 0 initially

            for (int j = 0; j < n; j++) {

                if (graph[i][j] && color[j] == color[i]) { // If adjacent node has the same color

                    return false; // Not bicolorable

                }

                if (graph[i][j] && color[j] == -1) { // If adjacent node is uncolored

                    color[j] = 1 - color[i]; // Assign opposite color

                }

            }

        }

    }

    return true; // If all nodes can be colored without conflicts, it's bicolorable

}



int main() {

    int n, e, u, v;



    while (scanf("%d %d", &n, &e) == 2) {

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {

                graph[i][j] = 0; // Initialize adjacency matrix

            }

            color[i] = -1; // Initialize color array

        }



        for (int i = 0; i < e; i++) {

            scanf("%d %d", &u, &v);

            graph[u][v] = graph[v][u] = 1; // Add edges to the graph

        }



        if (isBicolorable(n)) {

            printf("BICOLORABLE\n");

        } else {

            printf("NOT BICOLORABLE\n");

        }

    }

    return 0;

}


