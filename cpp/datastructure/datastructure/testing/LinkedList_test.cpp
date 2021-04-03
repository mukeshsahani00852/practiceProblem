#include "../LinkedList/LinkedList.h"

int main(int argc, char* argv[]) {

    SinglyLinkedList<int> *list = new SinglyLinkedList<int>(); 
    list->add(32); 
    list->add(321); 
    list->add(11); 
    list->printList();

    return 0; 
}