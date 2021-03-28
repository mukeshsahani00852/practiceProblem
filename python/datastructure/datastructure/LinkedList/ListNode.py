# fiilename : ListNode.py 

class SinglyLinkedListNode: 
    def __init__(self): 
        self.data = None 
        self.next = None 


class DoublyLinkedListNode(SinglyLinkedListNode): 
    def __init__(self): 
        super().__init__()
        self.previous = None 
    
