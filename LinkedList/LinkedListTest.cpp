#include "LinkedList.h"

int main(int argc, char* argv[]) {

    LinkedList *list = new LinkedList(); 
        list->insertKey(12); 
        list->insertKey(11); 
        list->insertKey(11); 
        list->insertKey(3);
        list->insertKey(22); 
        list->printList(); 
        cout << endl << list->size() << " node address : " << list->getHead() << endl; 
    cout << endl; 
    delete list; 

    return 0; 
}