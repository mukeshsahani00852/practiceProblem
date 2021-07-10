# filname : Stack.py 


#-------------------------------------------------- 
class Stack: 

    def __init__(self): 
        self.stack = []
    
    def push(self, ele): 
        self.stack.append(ele)
    
    def pop(self): 
        if self.isEmpty(): 
            return None 
        else: 
            return self.stack.pop(len(self.stack) - 1) 

    def isEmpty(self): 
        return self.stack == []





# ------------------testing--------------------------- 

if __name__ == '__main__': 
    stack = Stack()
    stack.push(12) 
    stack.push(11)
    stack.push(10)
    stack.push(112)
    print(stack.pop())