#ifndef GRAPH_H 
#define GRAPH_H 

#include <iostream> 
#include <cstdlib> 
#include "../LinkedList/LinkedList.h"


using namespace std; 

// O(V X V) -> space required. 

class GraphAdjMatrix {
    public: 

        GraphAdjMatrix(); 
        GraphAdjMatrix(int number_of_vertex, int number_of_edges, bool isDirected); 
        ~GraphAdjMatrix(); 
        void print(); 
        

    private: 
        int *adjencyMatrix; 
        int number_of_vertex; 
        int number_of_edges; 
        bool isDirected; 

}; 

GraphAdjMatrix::GraphAdjMatrix() {
    // default constructor. 
}

GraphAdjMatrix::GraphAdjMatrix(int number_of_vertex, int number_of_edges, bool isDirected) {
    this->number_of_vertex = number_of_vertex; 
    this->number_of_edges = number_of_edges; 
    this->adjencyMatrix = new int[this->number_of_vertex * this->number_of_vertex]; 
    this->isDirected = isDirected; 
    
    int start = 0, end = 0; 
    for(int i = 0; i < this->number_of_edges; i++) {
        cin >> start >> end; 
        this->adjencyMatrix[(start - 1) * this->number_of_vertex + (end - 1)] = 1; 
        if(!this->isDirected) {
            this->adjencyMatrix[(end - 1) * this->number_of_vertex + (start - 1)] = 1;
        }
    }
}


void GraphAdjMatrix::print() {
    cout << endl; 
    for(int i = 0; i < this->number_of_vertex; i++) {
        for(int j = 0; j < this->number_of_vertex; j++) {
            cout << this->adjencyMatrix[i * this->number_of_vertex + j]  << " "; 
        }
        cout << endl; 
    }   
}


GraphAdjMatrix::~GraphAdjMatrix() {
    delete[] this->adjencyMatrix; 
}


/**
 * class : GraphAdjList
*/

class GraphAdjList {
    public: 
        GraphAdjList(int number_of_edges, int number_of_vertex); 
        ~GraphAdjList(); 
        void printGraph() const; // print Graph.
    private: 
        SinglyLinkedList<int> *adj_list; 
}; 





#endif 