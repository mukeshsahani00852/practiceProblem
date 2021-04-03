#include "Graph.h"

int main(int argc, char* argv[]) {

    GraphAdjMatrix *graph = new GraphAdjMatrix(5, 7, false); 
    graph->print(); 



    return 0; 
}