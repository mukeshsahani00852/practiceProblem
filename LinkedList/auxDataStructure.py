# filename: auxDataStructure.py 

# HashSet. 

class Set: 
    def __init__(self): 
        self.set_list = [] # list of storing data in list. 

    def insertKey(self, element): 
        self.set_list.append(element) # add element at the end of list. 

    def findList(self, element): 
        if element in self.set_list: 
            return element 
        else: 
            return None 
    
    def deleteSet(self): 
        del self.set_list # delete Data storing Area.