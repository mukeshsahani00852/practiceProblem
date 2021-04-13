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
            self.matrix[point_list[0] - 1][point_list[1] - 1] = 1 
            if not self.isDirected: 
                self.matrix[point_list[1] - 1][point_list[0] - 1] = 1 

    def show(self): 
        print(self.matrix)

        
