import java.util.ArrayList; 

public class PriorityQueue<T,Q> {
    private ArrayList<PriorityQueueNode<T,Q>> priorityQueue; 
    private int count = 0; 

    public PriorityQueue() {
        this.priorityQueue = new ArrayList<PriorityQueueNode<T,Q>>(); 
    }

    // -----------------------private methods.--------------------------------------

    private int leftChild(int parent) {
        int left_child = 2*parent + 1; 
        if(left_child > this.priorityQueue.size()) {
            return -1; 
        }
        else {
            return left_child; 
        }
    }

    private int rightChild(int parent) {
        int right_child = 2 * parent + 2; 
        if(right_child > this.priorityQueue.size()) {
            return -1; 
        }
        return right_child; 
    }

    private int parent(int child) {
        int parent = (child - 1) / 2; 
        if(parent < 0 || parent > this.priorityQueue.size()) {
            return -1; 
        }
        return parent; 
    }

}



class PriorityQueueNode<T,Q> {
    private T key; 
    private Q value; 

    public PriorityQueueNode(T key,Q value) {
        this.key = key; 
        this.value = value; 
    }

    public PriorityQueueNode() {
        this.key = null; 
        this.value = null; 
    }

    public T getKey() {
        return this.key; 
    }

    public Q getValue() {
        return this.value; 
    }

    public void setKey(T key) {
        this.key = key; 
    }

    public void setValue(Q value) {
        this.value = value; 
    }


}