# filename : utils.py 


# ---------------------------------------- 
class Queue: 
    def __init__(self): 
        self.queue = []
    
    def enQueue(self, ele): 
        self.queue.append(ele)

    def deQueue(self): 
        if self.isEmpty(): 
            return None 
        else: 
            return self.queue.pop(0)
    
    def isEmpty(self): 
        return self.queue == []




# ----------------------------------- 
class Stack: 

    def __init__(self): 
        self.stack = []

    def push(self, element): 
        self.stack.append(element)
    
    def pop(self): 
        if self.isEmpty(): 
            return None 
        else: 
            return self.stack.pop(len(self.stack) - 1)

    def isEmpty(self): 
        return self.stack == []

