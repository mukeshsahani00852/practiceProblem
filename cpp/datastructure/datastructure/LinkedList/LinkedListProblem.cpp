#include "LinkedList.h"
#include "LinkedListNode.h"
#include <ctime> 

/**
 * 
 * problem 1 -> Find nth Last Node. 
 * 
*/

template <typename T> 
SinglyLinkedListNode<T>* nthNodeFromLast(SinglyLinkedListNode<T> *head, int k, int &i) {
    if(head == NULL) {
        return NULL; 
    } 
    SinglyLinkedListNode<T> *temp = nthNodeFromLast(head->getNext(), k,i);
    i += 1; 
    if(i == k) {
        return head; 
    } else {
        return temp; 
    }
}

template <typename T> 
SinglyLinkedListNode<T> *nthNodeFromLast(SinglyLinkedList<T> *list, int k) {
    int i = 0; 
    return nthNodeFromLast(list->getHead(), k, i); 
}




/**
 * problem 2 -> parition of Linked Linked based on pivot. 
*/

template <typename T> 
SinglyLinkedList<T>* partition_list_based_on_pivot(SinglyLinkedList<T> *list, int pivot_value) {
    SinglyLinkedListNode<T> *before_list_node = nullptr;  
    SinglyLinkedListNode<T> *after_list_node = nullptr; 
    SinglyLinkedListNode<T> *end_list_head = nullptr;
    SinglyLinkedListNode<T> *before_list_head = nullptr;  
    SinglyLinkedListNode<T> *node = list->getHead(); 
    while(node != nullptr) {
        if(node->getData() < pivot_value) {
            if(before_list_node == nullptr) {
                before_list_node = new SinglyLinkedListNode<int>(node->getData());  
                before_list_head = before_list_node; 
            } else {
                before_list_node->setNext(new SinglyLinkedListNode<int>(node->getData())); 
                before_list_node = before_list_node->getNext(); 
            }
        } else { 
            if(after_list_node == nullptr) {
                after_list_node = new SinglyLinkedListNode<int>(node->getData()); 
                end_list_head = after_list_node; 
            } else {
                after_list_node->setNext(new SinglyLinkedListNode<int>(node->getData())); 
                after_list_node = after_list_node->getNext(); 
            }
        }
        node = node->getNext(); // iterate over next node. 
    }

    SinglyLinkedList<T> *result_list = new SinglyLinkedList<T>(); 
    if(before_list_head != nullptr) {
        before_list_node->setNext(end_list_head); 
        result_list->setHead(before_list_head); 
    } else {
        result_list->setHead(end_list_head); 
    }

    return result_list; 
     
}

int main(int argc, char* argv[]) {
    
    int pivot; 
    int seed_random = static_cast<int>(time(0)), position = 0; // random seed 
    srand(seed_random); 

    SinglyLinkedList<int> *list = new SinglyLinkedList<int>(); 
    for(int i = 0; i < 20; i++) {
        list->add(random() % 100); 
    }
    list->printList(); 
    cin >> pivot; 
    SinglyLinkedList<int> *r_list = partition_list_based_on_pivot(list, pivot); 
    r_list->printList(); // print list. 

    return 0; 
}