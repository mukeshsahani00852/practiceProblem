#ifndef QUEUE_H 
#define QUEUE_H 

#include <iostream> 
#include <cstdlib> 
#include <stdexcept> 
#include "../LinkedList/LinkedList.h"
#include "../LinkedList/LinkedListNode.h"
using namespace std; 


template <typename T> 
class Queue {
    public: 
        Queue(); 
        ~Queue(); 
        void enQueue(T data); 
        T deQueue(); 
        bool isEmpty() const; 

    private: 
        SinglyLinkedList<T> *queue; 
}; 

template <typename T> 
Queue<T>::Queue() {
    queue = new SinglyLinkedList<T>(); 
}

template <typename T> 
void Queue<T>::enQueue(T data) {
    queue->add(data); 
}

template <typename T> 
T Queue<T>::deQueue() {
    SinglyLinkedListNode<T> *node = this->queue->getHead(); // get Head. 
    this->queue->setHead(this->queue->getHead()->getNext()); 
    T data = node->getData(); 
    delete node; 
    return data; 
}

template <typename T> 
bool Queue<T>::isEmpty() const {
    return this->queue->getHead() == NULL; // if no element in linkedlist return Queue is empty. 
}

#endif 