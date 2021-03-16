#ifndef LINKEDLIST_H 
#define LINKEDLIST_H 

#include "LinkedListNode.h"

template <typename T> 
class SinglyLinkedList {

    public: 
        SinglyLinkedList(); 
        ~SinglyLinkedList(); 
        void add(T data); // add a new element. 
        void remove(T data); // remove an element. 
        bool search(T data) const; // search for an element. 
        void printList() const; // print list. 

    private: 
        SinglyLinkedList<T> *head; 

}; 

template <typename T> 
SinglyLinkedList<T>::SinglyLinkedList() {
    this->head = NULL; 
}

template <typename T> 
void SinglyLinkedList<T>::add(T data) {
    if(this->head == NULL) {
        this->head = new SinglyLinkedListNode<T>(data); // if linked list is empty init HEAD of linked list. 
    } else {
        SinglyLinkedListNode<T> *current = this->head; 
        while(currnet->getNext() != NULL) {
            current = currnet->getNext(); 
        }
        current->setNext(new SinglyLinkedListNode<T>(data)); // add new node in linked list. 
    }
}

#endif 