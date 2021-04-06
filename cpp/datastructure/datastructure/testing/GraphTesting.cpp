#include "../Graph/Graph.h"

int main(int argc, char* argv[]) {

    GraphAdjList *graph  = new GraphAdjList(5, 4);
    graph->printGraph(); // print Graph Adjency List.  


    return 0; 
}