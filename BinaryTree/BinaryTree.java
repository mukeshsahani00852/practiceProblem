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

            }
        }
    }

}
