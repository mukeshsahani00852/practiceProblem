public class ListNode {
    public ListNode()
    {
        // List Node constructor. 
        data = 0; 
        next = null; 
    }

    public int getData() { // get Data stored in List Node. 
        return this.data;
    }
    
    public ListNode getNext() {
        return this.next;
    }
    
    public boolean setData(int data) {
        this.data = data;
        return true; 
    }
    
    public boolean setNext(ListNode node) {
        this.next = node;
        return true; 
    }

    private int data; 
    private ListNode next; 
}
