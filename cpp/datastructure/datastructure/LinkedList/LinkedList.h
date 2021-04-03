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
        SinglyLinkedListNode<T> *getHead() const; 
        void setHead(SinglyLinkedListNode<T> *new_head); 
    private: 
        SinglyLinkedListNode<T> *head; 

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
        while(current->getNext() != NULL) {
            current = current->getNext(); 
        }
        current->setNext(new SinglyLinkedListNode<T>(data)); // add new node in linked list. 
    }
}

template <typename T> 
SinglyLinkedListNode<T>* SinglyLinkedList<T>::getHead() const {
    return this->head; 
}

template <typename T> 
void SinglyLinkedList<T>::setHead(SinglyLinkedListNode<T> *new_head) {
    this->head = new_head; 
}

template <typename T> 
void SinglyLinkedList<T>::remove(T data) {
    if(this->head != NULL) {
        SinglyLinkedListNode<T> *current = this->head, *previous = this->head; 
        while(current != NULL && current->getData() != data) {
            previous = current; 
            current = current->getNext(); 
        }
        if(current != NULL) {
            if(current == this->head) {
                this->head = this->head->getNext(); 
                delete current; 
            } else {
                previous->setNext(current->getNext()); 
                delete current; 
            }
        }
    }
}

template <typename T> 
bool SinglyLinkedList<T>::search(T data) const {
    if(this->head == NULL) 
        return false; // linked list is empty. 
    else {
        SinglyLinkedListNode<T> *current_node = this->head; 
        while(current_node != NULL) {
            if(current_node->getData() == data) {
                return true;
            } 
            current_node = current_node->getNext(); 
        }
        return false; 
    }
    
}

template <typename T> 
void SinglyLinkedList<T>::printList() const {
    cout << endl; 
    SinglyLinkedListNode<T> *current = this->head; 
    while(current != NULL) {
        cout << current->getData() << ", "; 
        current = current->getNext(); 
    }
    cout << endl; 
}

template <typename T> 
SinglyLinkedList<T>::~SinglyLinkedList() {
    SinglyLinkedListNode<T> *current = this->head, *temp = NULL; 
    while(current != NULL) {
        temp = current; 
        current = current->getNext(); 
        delete temp; 
    }
}



#endif 