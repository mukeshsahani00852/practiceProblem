
public class minimalHeightBST {
    
    /**
     * problem : given a sorted array of integer make a minimal height BST. 
     */

    public static Node createMinimalBST(int[] arr) {
        return createMinimalBST(arr, 0, arr.length - 1); 
    }

    public static Node createMinimalBST(int[] arr, int from, int to) {
        if(from > to) {
            return null; 
        }
        int mid = (from + to) / 2; 
        Node node = new Node(arr[mid]); 
        node.setLeft(createMinimalBST(arr, from, mid - 1)); 
        node.setRight(createMinimalBST(arr, mid + 1, to)); 
        return node; 
    }


    
    public static void main(String[] args) {
        int[] arr = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; 
        BinarySearchTree bst = new BinarySearchTree(); 
        bst.setRoot(createMinimalBST(arr));
        bst.inorderTraversal();
        System.out.println(); 
        System.out.println(bst.getHeight()); 

    }
}
