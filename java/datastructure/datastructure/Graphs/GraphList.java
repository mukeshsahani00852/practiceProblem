package datastructure.Graphs;

import datastructure.linkedList.SinglyLinkedList;
import java.util.ArrayList; 
import java.util.Scanner; 


/**
 * Graph implementation using adjency List. 
 */

 /**
  * user will work in number system start with 1, module will work in system start with 0. 
  */

public class GraphList {

    private ArrayList<SinglyLinkedList<Integer>>  adjencyList; 
    private int number_of_vertex; 
    private int number_of_edges; 
    private boolean isDirected; 


    public GraphList(int vertex, int edges, boolean directed) {
        this.number_of_vertex = vertex; 
        this.number_of_edges = edges; 
        this.isDirected = directed; 
        this.adjencyList = new ArrayList<SinglyLinkedList<Integer>>(this.number_of_vertex); 
        
        for(int i = 0; i < this.number_of_vertex; i++) {
            this.adjencyList.add(new SinglyLinkedList<Integer>()); 
            this.adjencyList.get(i).add(i); 
        }
        initGraph();      
    }

    public void initGraph() {
        Scanner sc = new Scanner(System.in); 
        int start = -1, end = -1; 
        for(int i = 0; i < this.number_of_edges; i++) {
            start = sc.nextInt(); 
            end = sc.nextInt(); 
            adjencyList.get(start - 1).add(end - 1);
            if(!this.isDirected)
                adjencyList.get(end - 1).add(start - 1);  
        }
        sc.close(); 
    }    

    public void printGraph() {
        for(int i  = 0; i < this.number_of_vertex; i++) {
            adjencyList.get(i).printList(); // print Adjency List for each vertex. 
        }
    }

    SinglyLinkedList<Integer> getAdejcyListForVertex(int vertex) {
        return this.adjencyList.get(vertex - 1); // return adjency List for each vertex. 
    }


}
