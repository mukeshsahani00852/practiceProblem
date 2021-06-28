# filename : BinaryTree.py 



# -----------------------------------------
class BinaryTree: 

    def __init__(self): 
        self.root = None 

    def insertKey(self, ele): 
        if self.root is None: 
            self.root = BinaryTreeNode()
            self.root.data = ele 
        else: 
            queue = Queue()
            queue.enQueue(self.root)
            while not queue.isEmpty(): 
                node = queue.deQueue()
                if node.left is None: 
                    node.left = BinaryTreeNode()
                    node.left.data = ele 
                    break 
                else: 
                    queue.enQueue(node.left)

                if node.right is None: 
                    node.right = BinaryTreeNode()
                    node.right.data = ele 
                    break 
                else: 
                    queue.enQueue(node.right)

    def inorderTraversal(self): 
        pass 
    


# -----------------------------------------
class BinaryTreeNode: 

    def __init__(self): 
        self.data = None 
        self.left = None 
        self.right = None 




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

    
