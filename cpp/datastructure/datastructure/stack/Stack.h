#ifndef STACK_H 
#define STACK_H 
#include <stdexcept> 


#include "../LinkedList/LinkedListNode.h"
#include "../LinkedList/LinkedList.h"


template <typename T> 
class Stack {

    public: 
        Stack(); 
        ~Stack(); 
        void push(T element); 
        T pop(); 
        bool isEmpty() const; 
        void print() const; 
        

    private: 
        SinglyLinkedList<T> *stack; 
}; 

template <typename T> 
Stack<T>::Stack() {
    this->stack = new SinglyLinkedList<T>(); 
}   

template <typename T> 
Stack<T>::~Stack() {
    delete this->stack; 
}

template <typename T> 
void Stack<T>::push(T element) {
    this->stack->add(element); 
}

template <typename T> 
bool Stack<T>::isEmpty() const {
    return this->stack->getHead() == NULL; 
}

template <typename T> 
T Stack<T>::pop() {
    if(this->stack->getHead() == NULL) {
        throw logic_error("Stack UnderFlow !!!"); 
    } else {
        SinglyLinkedListNode<T> *temp_node = this->stack->getHead(); // head_node. 
        T data = temp_node->getData(); 
        this->stack->setHead(temp_node->getNext()); // assign new head. 
        delete temp_node; 
        return data; 

    }
}

template <typename T> 
void Stack<T>::print() const {
    this->stack->printList(); // print Linked List. 
}


#endif 