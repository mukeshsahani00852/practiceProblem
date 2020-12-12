public class LinkedListNode {
    public int data; 
    public LinkedListNode next; 

    public LinkedListNode() {
        // default constructor. 
        this.next = null; 
    }

    public LinkedListNode(int data) {
        this.data = data; 
        this.next = null; 
    }

    public void setData(int data) {
        this.data = data; 
    }

    public int getData() {
        return this.data; 
    }

    public LinkedListNode getNext() {
        return this.next; 
    }

    public void setNext(LinkedListNode next) {
        this.next = next; 
    }
}