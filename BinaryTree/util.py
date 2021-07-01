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


#-------------------------------------------- 
class Delimiter: 

    pass 


# ----------------------------------------- 
class LinkedList: 

    def __init__(self): 
        self.head = None 
    
    def add(self, ele): 
        if self.head is None: 
            self.head = LinkedListNode()
            self.head.data = ele 
        else: 
            temp = self.head 
            while temp.next is not None: 
                temp = temp.next 
            temp.next = LinkedListNode()
            temp.next.data = ele 


    def printList(self): 
        if self.head is None: 
            print("List is Empty!!!")
        else: 
            temp = self.head 
            while temp is not None: 
                print(temp.data, end = ", ")
                temp = temp.next 

class LinkedListNode: 
    
    def __init__(self): 
        self.data = None 
        self.next = None 