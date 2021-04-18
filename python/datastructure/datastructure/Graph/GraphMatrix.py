# filename GraphMatrix.py 

class GraphMatrix: 

    def __init__(self, number_of_vertex, number_of_edges, isDircted):
        self.number_of_vertex = number_of_vertex 
        self.number_of_edges = number_of_edges 
        self.isDirected = isDircted 
        self.makeMatrix()

    def makeMatrix(self):
        self.matrix = [[0 for i in range(0, self.number_of_vertex)] for j in range(0, self.number_of_vertex)]
        for edges in range(0, self.number_of_edges): 
            point_string = input()
            point_list = point_string.split(" ")
            self.matrix[int(point_list[0]) - 1][int(point_list[1]) - 1] = 1 
            if not self.isDirected: 
                self.matrix[int(point_list[1]) - 1][int(point_list[0]) - 1] = 1 

    def show(self): 
        print(self.matrix)



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

