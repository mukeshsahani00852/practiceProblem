# filename : utils.py 

"""
    classname : Queue 
"""

class Queue: 

    def __init__(self): 
        self.queue = [] # list which will work as Queue. 
    
    def enQueue(self, element): # add element to Queue 
        self.queue.append(element)

    def deQueue(self): 
        if self.isEmpty(): 
            raise QueueUnderFlow 
        else: 
            return self.queue.pop(0) # delete first element and return it. 

    def isEmpty(self): 
        return self.queue == []





"""
    class of Exceptions. 
"""

class QueueUnderFlow(Exception): 

    def __init__(self): 
        super().__init__()
    