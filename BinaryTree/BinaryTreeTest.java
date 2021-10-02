public class BinaryTreeTest {

    public static void main(String[] args) {
        BinaryTree<Integer> binaryTree = new BinaryTree<Integer>(); 
        binaryTree.insertKey(12);
        binaryTree.insertKey(11);
        binaryTree.insertKey(10);
        binaryTree.insertKey(120); 
                binaryTree.insertKey(12);
        binaryTree.insertKey(11);
        binaryTree.insertKey(10);
        binaryTree.insertKey(120); 
        binaryTree.levelOrderTraversal();
        System.out.println(); 
        binaryTree.inorderTraversal();
    }

}
