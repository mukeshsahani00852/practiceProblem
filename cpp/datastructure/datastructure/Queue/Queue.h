#ifndef QUEUE_H 
#define QUEUE_H 

#include <iostream> 
#include <cstdlib> 
#include <stdexcept> 
#include "../LinkedList/LinkedList.h"
using namespace std; 


template <typename T> 
class Queue {
    public: 
        Queue(); 
        ~Queue(); 
        void enQueue(T data); 
        T deQueue(); 

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
    
}

#endif 