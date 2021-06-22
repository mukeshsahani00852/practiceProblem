#ifndef GRAPHALGORITHMS_H 
#define GRAPHALGORITHSMS_H 
#include "Graph.h"
#include <vector>  

using namespace std; 

#include "../Queue/Queue.h"  // auxillary datastructure for BFS. 

/**
 * DFS algorithms. 
*/

void DFS(GraphAdjMatrix graph) {
    int source_vertex = 0; 
    cout << source_vertex << ", "; 
    vector<int> visited;
    visited.push_back(source_vertex);  
    return DFS_aux(graph, source_vertex,visited); 
}

void DFS_aux(GraphAdjMatrix graph, int source_vertex, vector<int> &visited) {
    // get all adjecent vertex of source_vertex. 
       
}


/**
 * utiltiy Function. 
*/

bool isIn(vector<int> &visited, int key) {
    for(int i = 0; i < visited.size(); i++) {
        if(visited[i] == key) {
            return true; 
        }
    }
    return false; 
}





#endif 