public class BinaryTree<T> {
    protected BinaryTreeNode<T> root; 

    public BinaryTree() {
        this.root = null; 
    }

    public void insertKey(T data) {
        Queue<BinaryTreeNode<T>> queue = new Queue<BinaryTreeNode<T>>(); 
        BinaryTreeNode<T> node = null; 
        if(this.root == null) {
            this.root = new BinaryTreeNode<T>(data); 
        } else {
            queue.enQueue(this.root);
            while(!queue.isEmpty()) {
                node = queue.deQueue(); 
                if(node.left == null) {
                    node.left = new BinaryTreeNode<T>(data); 
                    break; 
                } else {
                    queue.enQueue(node.left);
                }
                if(node.right == null) {
                    node.right = new BinaryTreeNode<T>(data); 
                    break; 
                } else {
                    queue.enQueue(node.right);
                }
            }
        }
    }

    public void inorderTraversalAux(BinaryTreeNode<T> node) {
        if(node != null) {
            inorderTraversalAux(node.left);
            System.out.print(node.getData() + ", "); 
            inorderTraversalAux(node.right);
        }
    }


    public void inorderTraversal() {
        this.inorderTraversalAux(this.root);
    }

    public void levelOrderTraversal() {
        Queue<BinaryTreeNode<T>> queue = new Queue<BinaryTreeNode<T>>(); 
        BinaryTreeNode<T> node = null; 
        queue.enQueue(this.root);
        while(!queue.isEmpty()) {
            node = queue.deQueue(); 
            System.out.print(node.getData() + ", "); 
            if(node.left != null) {
                queue.enQueue(node.left);
            } 
            if(node.right != null) {
                queue.enQueue(node.right);
            }
        }
    }

}
