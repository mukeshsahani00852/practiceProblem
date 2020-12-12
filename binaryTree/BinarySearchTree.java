/**
 * filename : BinarySearchTree.java 
 */

public class BinarySearchTree {
    private Node root; 

    public BinarySearchTree() {
        this.root = null; 
    }

    public void insertKey(int data) {
        if(this.root == null) {
            this.root = new Node(data); 
        } else {
            this.insertKey(this.root, data);
        }
    }

    public void setRoot(Node root) {
        this.root = root; 
    }

    public Node getRoot() {
        return this.root; 
    }

    public void inorderTraversal() {
        if(this.root != null) {
            this.inorderTraversal(this.root); //  
        }
    }

    public int getHeight() {
        if(this.root == null) {
            return -1; 
        } else {
            return this.getHeight(this.root); 
        }
    }

    public int getHeight(Node node) {
        if(node == null) {
            return -1; 
        } else {
            int lf = this.getHeight(node.getLeft()); 
            int rh = this.getHeight(node.getRight()); 
            return lf > rh ? lf +1 : rh + 1; 
        }
    }

    private Node insertKey(Node node, int data) {
        if(node == null) {
            Node tempNode = new Node(data); 
            return tempNode; 
        } else {
            if(node.getData() < data) {
                if(node.getRight() == null) {
                    node.setRight(this.insertKey(node.getRight(), data));
                } else {
                    return this.insertKey(node.getRight(), data); 
                }             
            } else {
                if(node.getLeft() == null) {
                    node.setLeft(this.insertKey(node.getLeft(), data)); 
                } else { 
                    return this.insertKey(node.getLeft(), data); 
                }
            }
        }

        return null; 

    } 

    

    private void inorderTraversal(Node node) {
        if(node != null) {
            this.inorderTraversal(node.getLeft());
            System.out.print(node.getData() + ", "); 
            this.inorderTraversal(node.getRight()); 
        }
    }

}