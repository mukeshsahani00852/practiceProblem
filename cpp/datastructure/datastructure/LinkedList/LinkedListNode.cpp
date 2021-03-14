#ifndef LINKEDLISTNODE_H 
#define LINKEDLISTNODE_H 

template <typename T> 
class SinglyLinkedListNode {
    public: 
        SinglyLinkedListNode(); 
        SinglyLinkedListNode(T element); 
        void setData(T element); 
        T getData(); 
        SinglyLInkedListNode<T> getNext() {
            return this->next; 
        }
        void setNext(SinglyLinkedListNode<T> next_node); 

    private: 
        SinglyLinkedListNode<T> next; 
        T data; 

}; 


template <typename T> 
SinglyLinkedListNode<T>::SinglyLinkedListNode() {
    this.next = nullptr; 
}

template <typename T> 
SinglyLinkedListNode<T>::SinglyLinkedListNode(T element) {
    this->data = element; 
    this.next = nullptr; 
}

template <typename T> 
void 




#endif 