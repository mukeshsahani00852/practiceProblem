public class SinglyLinkedList implements List {

    private LinkedListNode head; 

    public SinglyLinkedList() {
        // default constructor. 
        this.head = null; 
    }

    public LinkedListNode getHead() {
        return this.head; 
    }

    public void setHead(LinkedListNode head) {
        this.head = head; 
    }

    public void insertKey(int key) {
        if(this.head == null) {
            this.head = new LinkedListNode(key); 
        } else {
            LinkedListNode current = this.head; 
            while(current.getNext() != null) {
                current = current.getNext(); 
            } 
            current.setNext(new LinkedListNode(key)); 
        }
    }

    public void deleteKey(int key) {
        return; 
    }

    public void deleteFirst() {
        return; 
    }

    public void deleteLast() {
        return; 
    }

    public void printList() {
        if(this.head == null) {
            System.out.println("List is Empty !!!\n"); 
        } else {
            LinkedListNode current = this.head; 
            while(current != null) {
                System.out.print(current.getData() + ", "); 
                current = current.getNext(); /// 
            }
        }
        System.out.println(); 
    }  

}


