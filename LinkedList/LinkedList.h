#ifndef LINKEDLIST_H 
#define LINKEDLIST_H 

#include "LinkedListNode.h" 

class LinkedList {
    public: 
        LinkedList(); 
        ~LinkedList(); 
        void insertKey(int key);
        int size() const; 
        LinkedListNode* getHead() const;  
        void printList() const; 

    private: 
        LinkedListNode *head; 

}; 

LinkedList::LinkedList() {
    this->head = NULL; 
}

LinkedList::~LinkedList() {
    LinkedListNode *previous_temp = this->head, *current_temp = this->head; 
    while(current_temp != NULL) {
        previous_temp = current_temp->getNext(); 
        delete current_temp; 
        current_temp = previous_temp;        
    }
}

void LinkedList::insertKey(int key) {
    if(this->head == NULL) {
        this->head = new LinkedListNode(key); 
    } else {
        LinkedListNode *current = this->head; 
        while(current->getNext() != NULL) {
            current = current->getNext(); 
        }
        current->setNext(new LinkedListNode(key)); 
    }
}

int LinkedList::size() const {
    if(this->head == NULL) { 
        return 0; 
    } else {
        int counter = 0; 
        LinkedListNode *temp = this->head; 
        while(temp) {
            counter += 1; 
            temp = temp->getNext(); 
        }   
        return counter; 
    }
}


LinkedListNode* LinkedList::getHead() const {
    return this->head; 
}

void LinkedList::printList() const {
    LinkedListNode *temp = this->head; 
    while(temp) {
        cout << temp->getData() << ", "; 
        temp = temp->getNext(); 
    }
}



#endif 