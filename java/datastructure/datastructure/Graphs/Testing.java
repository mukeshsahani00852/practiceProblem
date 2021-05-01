package datastructure.Graphs; 

class Testing {
    public static void main(String[] args) {
        Graph graph = new Graph(8, 11, false); 
        DFS dfs = new DFS(graph, 1); // do terversal in grpah.
    }
}