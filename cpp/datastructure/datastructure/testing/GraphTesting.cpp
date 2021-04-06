#include "../Graph/Graph.h"

int main(int argc, char* argv[]) {

    GraphAdjList *graph  = new GraphAdjList(5, 4, false);
    graph->printGraph(); // print Graph Adjency List.  


    return 0; 
}