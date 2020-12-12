#ifndef LINKEDLISTNODE_H
#define LINKEDLISTNODE_H 


#include <iostream> 
#include <cstdlib> 

using namespace std; 

class LinkedListNode {
    public: 
        LinkedListNode(); 
        LinkedListNode(int data); 
        int getData() const; 
        LinkedListNode* getNext() const; 
        void setData(int data); 
        void setNext(LinkedListNode *next); 

    private: 
        int data; 
        LinkedListNode *next; 
}; 

LinkedListNode::LinkedListNode() {
    this->data = 0; 
    this->next = NULL; 
}

LinkedListNode::LinkedListNode(int data) {
    this->data = data; 
    this->next = NULL; 
}

int LinkedListNode::getData() const {
    return this->data; 
}

LinkedListNode* LinkedListNode::getNext() const {
    return this->next; 
}

void LinkedListNode::setData(int data) {
    this->data = data; 
}

void LinkedListNode::setNext(LinkedListNode *next) {
    this->next = next; 
}


#endif 