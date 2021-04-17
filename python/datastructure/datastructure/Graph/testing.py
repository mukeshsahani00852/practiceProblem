# filename : testing.py 

from .GraphAlgorithms import bfs_Graph 
from .GraphMatrix import GraphMatrix 


if __name__ == '__main__': 
    graph = GraphMatrix(5, 7, False) # graph 
    bfs_deatils = bfs_Graph(graph)
    print(bfs_Graph)
    