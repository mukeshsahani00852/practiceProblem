public class BinaryTreeNode<T> {
    protected T data; 
    protected BinaryTreeNode<T> left; 
    protected BinaryTreeNode<T> right; 

    public BinaryTreeNode() {
        this.data = null; 
        this.left = null; 
        this.right = null; 
    }

    public BinaryTreeNode(T data) {
        this.data = data; 
        this.left = null; 
        this.right = null; 
    }

    public T getData() {
        return this.data; 
    }

    public BinaryTreeNode<T> getLeft() {
        return this.left; 
    }

    public BinaryTreeNode<T> getRight() {
        return this.right; 
    }

}