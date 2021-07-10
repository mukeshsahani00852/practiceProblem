# -------------------------stack problems----------------------------------- 
from Stack import Stack 
# --------------------------problem : 1 ------------------------------------ 

# implement MyQueue using Stack. 
class MyQueue: 

    def __init__(self): 
        self.main_stack = Stack()

    
    def enQueue(self, ele): 
        self.main_stack.push(ele)

    def deQueue(self): 
        if self.main_stack.isEmpty(): 
            return None 
        else: 
            aux_stack = Stack()
            while not self.main_stack.isEmpty(): 
                aux_stack.push(self.main_stack.pop())
            data = aux_stack.pop()
            while not aux_stack.isEmpty(): 
                self.main_stack.push(aux_stack.pop()) 
        return data 
    
    def isEmpty(self): 
        return self.main_stack.isEmpty()
    

