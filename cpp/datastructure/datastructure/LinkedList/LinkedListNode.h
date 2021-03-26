#ifndef LINKEDLISTNODE_H 
#define LINKEDLISTNODE_H 

#include <iostream> 
#include <cstdlib> 
using namespace std; 

template <typename T> 
class SinglyLinkedListNode {
    public: 
        SinglyLinkedListNode(); 
        SinglyLinkedListNode(T element); 
        void setData(T element); 
        T getData() const; 
        SinglyLinkedListNode<T>* getNext() const;
        void setNext(SinglyLinkedListNode<T> *next_node); 

    private: 
        SinglyLinkedListNode<T>* next; 
        T data; 

}; 


template <typename T> 
SinglyLinkedListNode<T>::SinglyLinkedListNode() {
    this->next = NULL; 
}

template <typename T> 
SinglyLinkedListNode<T>::SinglyLinkedListNode(T element) {
    this->data = element; 
    this->next = NULL; 
}

template <typename T> 
void SinglyLinkedListNode<T>::setData(T data) {
    this->data = data; 
}

template <typename T> 
void SinglyLinkedListNode<T>::setNext(SinglyLinkedListNode<T> *next_node) {
    this->next = next_node; 
}

template <typename T> 
SinglyLinkedListNode<T>* SinglyLinkedListNode<T>::getNext() const {
    return this->next; 
}

template <typename T> 
T SinglyLinkedListNode<T>::getData() const {
    return this->data; 
}


#endif 