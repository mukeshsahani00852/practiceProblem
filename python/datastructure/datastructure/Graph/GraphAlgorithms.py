# filename : GraphAlgorithms.py 

from .utils import Queue 

GRAY = 0
BLACK = -1 
WHITE = 1 



def bfs_Graph(graph): 
    color_list = [WHITE for i in range(0, graph.number_of_vertex)]
    previous_vertex = [None for i in range(0, graph.number_of_vertex)]
    distance_from_root = [-1 for i in range(0, graph.number_of_vertex)]

    color_list[0] = GRAY 
    distance_from_root[0] = 0 
    previous_vertex[0] = None 

    queue = Queue() # queue for processing vertex. 

    queue.enQueue(0)

    while not queue.isEmpty(): 
        target_vertex = queue.deQueue()
        for j in range(0, graph.number_of_vertex): 
            if graph.matrix[target_vertex][j] != 0: 
                if color_list[j] == WHITE: 
                    color_list[j] = GRAY 
                    previous_vertex[j] = target_vertex 
                    distance_from_root[j] += 1 
                    queue.enQueue(j)
        color_list[target_vertex] = BLACK 

    return color_list, previous_vertex, distance_from_root 
    

