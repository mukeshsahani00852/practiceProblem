# filename : GraphAdjList.py

class GraphAdjList: 

    def __init__(self, number_of_vertex, number_of_edges, is_directed):
        self.number_of_vertex = number_of_vertex
        self.number_of_edges = number_of_edges 
        self.is_directed = is_directed 
        self.adjList = [[] for i in range(0, self.number_of_vertex)]

    def makeList(self): 
        for edges in range(0, self.number_of_edges): 
            edges_tuple = input()
            edges_tuple_list = edges_tuple.split(" ")
            self.adjList[edges_tuple_list[0]].append(edges_tuple_list[1]) # add adjecent vertex in adj list. 
            if not self.is_directed: 
                self.adjList[edges_tuple_list[1]].append(edges_tuple_list[0])

