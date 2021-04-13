/***
 * 
 * special file for Linked List Testing. 
 * 
 */

#include "LinkedList.h"
#include "LinkedListNode.h"
#include <cmath> 

int linked_list_to_digit(SinglyLinkedList<int> *linked_list) {
    SinglyLinkedListNode<int> *current_node = linked_list->getHead(); 
    int result = 0, incr = 0; 

    while(current_node) {
        result += current_node->getData()*pow(10, incr); 
        incr++; 
        current_node = current_node->getNext(); // iterate over next node.
    }
    return result; 
}

int main(int argc, char* argv[]) {

    /**
     * testing for respresenting number as Linked List. 
    */
   SinglyLinkedList<int> *list = new SinglyLinkedList<int>(); 
   list->add(2); 
   list->add(5); 
   list->add(8); 
   cout << linked_list_to_digit(list) << endl; 


    return 0; 
}