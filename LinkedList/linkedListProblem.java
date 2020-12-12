import java.util.HashSet; 
import java.util.Scanner; 

public class linkedListProblem {

    /**
     * @name : removeDuplicate 
     * @apiNote : remove duplicate elements from Linked List. 
     */

    public static void removeDuplicate(SinglyLinkedList list) {
        LinkedListNode current = list.getHead(), previous = list.getHead(); 
        HashSet<Integer> hashset = new HashSet<Integer>(); // auzillary space. 
        while(current != null) {
            if(hashset.contains(current.getData())) {
                previous.setNext(current.getNext()); 
            } else {
                hashset.add(current.getData()); 
                previous = current; 
            }
            current = current.getNext(); 
        }
    }

    public static void removeDuplicate_without_extra_space(SinglyLinkedList list) {
        LinkedListNode current = list.getHead(), previous_temp = null, current_temp = null; 

        while(current != null) {
            previous_temp = current; 
            current_temp = current.getNext(); 
            while(current_temp != null) {
                if(current_temp.getData() == current.getData()) {
                    previous_temp.setNext(current_temp.getNext()); 
                } else { 
                    previous_temp = current_temp; 
                }
                current_temp = current_temp.getNext(); // move the current_pointer; 
            }
            current = current.getNext(); 
        }

    }

    /**
     * 
     * @name : get the kthe element from last using 
     */
    public static void kthLastNode(SinglyLinkedList list, int k) {
        kthLastNode(list.getHead(), k); 
    }

    public static int kthLastNode(LinkedListNode node, int k) {
        if(node == null) {
            return 0; 
        } else {
            int index = kthLastNode(node.getNext(), k) + 1;
            if(index == k) {
                System.out.println("Kth node from last node data is "  + node.getData()); 
            }
            return index;  
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in); 

        /**
         * problem 1 -> Testing 
         */

        SinglyLinkedList list = new SinglyLinkedList(); 
        list.insertKey(1); 
        list.insertKey(1);
        list.insertKey(2);
        list.insertKey(3);
        list.insertKey(-4); 
        list.insertKey(1); 
        list.insertKey(12); 
        list.insertKey(1); 
        list.insertKey(1);
        list.insertKey(2);
        list.insertKey(3);
        list.insertKey(-4); 
        list.insertKey(1); 
        list.insertKey(12);
        list.printList(); 
        System.out.println(); 
        kthLastNode(list, input.nextInt()); 
        System.out.println(); // print the Modified Linkedlist. 
        input.close(); 
    }
}