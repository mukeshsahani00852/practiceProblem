# filename : exception.py 

class StackUnderFlow(Exception): 

    def __init__(self): 
        super().__init__()

    def msg(self): 
        return "Stack Overflow Error !!!"