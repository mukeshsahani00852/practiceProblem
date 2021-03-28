# filename : Stack.py 
from .exception import StackUnderFlow 

class Stack: 
    def __init__(self): 
        self.stack = [] # stack.
    
    def push(self, element): 
        self.stack.insert(0, element) # add element in o
        return True 
    
    def isEmpty(self): 
        return self.stack == []

    def pop(self): 
        if self.isEmpty(): 
            raise StackUnderFlow() # if stack if empty throw StackUnderFlow Exception. 
        else: 
            return self.stack.pop(0) # remove top element. 

    def size(self): 
        return len(self.stack) # return size of stack. 
            

