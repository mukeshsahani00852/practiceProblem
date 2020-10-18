public class List {
    List() {
        this.head =  null; 
    }
    
    public boolean insertKey(int key)
    {
        ListNode node = this.head; 
        if(node == null) {
            this.head = new ListNode(); 
            this.head.setData(key); 
        } else {
            while (node.getNext() != null) {
                node = node.getNext();
            }
            ListNode newNode = new ListNode();
            newNode.setData(key);
            node.setNext(newNode);
        }
        return true; 
    }

    public void print() {
        ListNode temp = this.head;
        if(this.head == null) {
            System.out.println("List is emtpy"); 
        } else {
            while (temp != null) {
                System.out.print(temp.getData() + ", ");
                temp = temp.getNext();
            }
            System.out.println(); 
        }
    }

    private ListNode head;
     
}



