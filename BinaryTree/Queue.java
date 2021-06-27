import java.util.ArrayList; 

class Queue<T> {

    protected ArrayList<T> queue;
    public Queue() {
        this.queue = new ArrayList<T>(); 
    }
    
    public void enQueue(T ele) {
        this.queue.add(ele); 
    } 

    public T deQueue() {
        T ele = this.queue.get(0); 
        this.queue.remove(0); 
        return ele; 
    }

    public boolean isEmpty() {
        return this.queue.isEmpty(); 
    }

}