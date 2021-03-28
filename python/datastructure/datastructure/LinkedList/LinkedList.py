# filename : LinkedList.py 

from .ListNode import SinglyLinkedListNode, DoublyLinkedListNode

"""

    @class : SinglyLinkedList 

"""

class SinglyLinkedList: 
     
    def __init__(self): 
        self.head = None 

    def add(self, element): 
        if self.head is None: 
            self.head = SinglyLinkedListNode() # init head. 
            self.head.data = element 
        else: 
            current = self.head 
            while current.next is not None: 
                current =  current.next 
            current.next = SinglyLinkedListNode() # add new node in linkedlist. 
            current.next.data = element 
    
    def printList(self): 
        if self.head is None: 
            print("Linked List Empty !!!")
        else: 
            current = self.head 
            while current is not None: 
                print(f"{current.data}", end = ", ")
                current = current.next 
            print() # just for empty line. 
    
    def search(self, element): 
        if self.head is None: 
            return False 
        else: 
            current = self.head 
            while (current is not None) and (current.data != element) : 
                current = current.next 
            if current is not None: 
                return True 
            return False 
    

    def remove(self, element): 
        assert self.head is not None 
        if self.head.data == element: 
            self.head = self.head.next  # if target node is head, delete head remove get new head. 
        else: 
            previous = self.head 
            current = self.head 
            while (current is not None) and (current.data != element): 
                previous = current 
                current = current.next 
            if current is not None: 
                previous.next = current.next # delete target node. 

    


"""

    @class : DoublyLinkedList 

"""

class DoublyLinkedList(SinglyLinkedList):

    def __init__(self): 
        super().__init__() 
    
    def add(self, element): 
        if self.head is None: 
            self.head = DoublyLinkedListNode()
            self.head.data = element 
        
        else: 
            current = self.head 
            while current.next is not None: 
                current = current.next

            new_node = DoublyLinkedListNode() # add new node. 
            new_node.data = element
            new_node.previous = current 
            current.next = new_node 
 
    def search(self, element): 
        if self.head is None: 
            return False 
        else: 
            current = self.head 
            while (current is not None) and (current.data != element): 
                current = current.next 
            if current is not None: 
                return True 
            else: 
                return False

    def remove(self, element): 
        assert self.head is not None 
        if self.head.data == element: 
            self.head = self.head.next 
            self.head.previous = None 
        else: 
            previous = self.head 
            current = self.head 
            while (current is not None)  and (current.data != element): 
                previous = current 
                current = current.next 
            previous.next = current.next 
            if current.next is not None: 
                current.next.previous = previous 
            
            
    def _print(self): 
        current = self.head 
        while current is not None: 
            print(f"previous : {id(current.previous)} data : {current.data} address : {id(current)}  next : {id(current.next)}", end = ", \n")
            current = current.next 
        