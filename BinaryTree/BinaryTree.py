from util import Queue 

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
        return self._inorderTraversal(self.root) 

    def _inorderTraversal(self, node): 
        if node is not None: 
            self._inorderTraversal(node.left)
            print(node.data, end = ", ")
            self._inorderTraversal(node.right)
        

# -----------------------------------------
class BinaryTreeNode: 

    def __init__(self): 
        self.data = None 
        self.left = None 
        self.right = None 

    
# -------------------------------------------- 

if __name__ == '__main__': 
    tree = BinaryTree()
    tree.insertKey(12)
    tree.insertKey(11)
    tree.insertKey(121)
    tree.insertKey(111)
    tree.insertKey(10)
    tree.inorderTraversal() # level order traversal 
    del tree