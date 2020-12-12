import java.util.Random; 

public class ListTesting {
    public static void main(String[] args) {
        SinglyLinkedList list = new SinglyLinkedList(); 
        Random rand = new Random(); 
        for(int i = 0; i < 20; i++) {
            list.insertKey((int)(Math.random() * 100));
        }
        list.printList(); // print the linked list. 
    }
}