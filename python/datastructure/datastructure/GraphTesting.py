from Graph.GraphMatrix import GraphMatrix 
from Graph.GraphAlgorithms import bfs_Graph, DFS 

if __name__ == '__main__': 
    graph = GraphMatrix(5, 7, False)
    data = DFS(graph)
    print(data)
    

