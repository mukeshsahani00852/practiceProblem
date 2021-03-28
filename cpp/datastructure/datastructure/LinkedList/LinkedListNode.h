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


/**
 * 
 * Doubly Linked List Node 
 * 
*/

template <typename T> 
class DoublyLinkedListNode : public SinglyLinkedListNode<T> {
    public: 
        DoublyLinkedListNode(); 
        DoublyLinkedListNode(T element); 
    private: 
        DoublyLinkedListNode<T> *previous; 
}; 

template <typename T> 
DoublyLinkedListNode<T>::DoublyLinkedListNode() {
    this->next = NULL; 
    this->previous = NULL; 
}

template <typename T> 
DoublyLinkedListNode<T>::DoublyLinkedListNode(T element) {
    this->data = element; 
    this->previous = NULL; 
    this->next = NULL; 
}


template <typename T> 



#endif 