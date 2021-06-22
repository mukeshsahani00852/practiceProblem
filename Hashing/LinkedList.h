#ifndef LINKEDLIST_H 
#define LINKEDLIST_H 

#include <iostream> 
#include <cstdlib> 

using namespace std; 



class List {
    public: 
        List(); 
        void add(int element); 
        void printList() const; 
    private: 
        ListNode *head; 
        
}; 

List::List() {
    this->head = NULL; 
}

void List::add(int element) {
    // add element List. 
    if(this->head  == NULL) {
        this->head = new ListNode(); 
        this->head->setData(element);  
    } else {
        ListNode *temp = this->head; 
        while(temp != NULL) {
            temp = temp->getNext(); 
        }
        temp->setNext(new ListNode(element)); 
    }
}

void List::printList() const {
    ListNode *temp = this->head; 
    while(temp) {
        cout << temp->getData() << ", "; 
        temp = temp->getNext(); 
    }
}


class ListNode {
    public: 
        ListNode(); 
        ListNode(int ele); 
        int getData() const;
        ListNode* getNext() const; 
        void setData(int data); 
        void setNext(ListNode *next); 



    private: 
        int data; 
        ListNode *next; 
}; 

ListNode::ListNode() {
    this->data = 0; 
    this->next = NULL; 
}

ListNode::ListNode(int ele) {
    this->data = ele; 
    this->next = NULL;
}

int ListNode::getData() const {
    return this->data; 
}

ListNode *ListNode::getNext() const {
    return this->next; 
}

void ListNode::setData(int data) {
    this->data = data; 
}

void ListNode::setNext(ListNode *next) {
    this->next = next; 
}

#endif 