#include "LinkedList.h"
#include <ctime> 

int main(int argc, char* argv[]) {
    
    int seed_random = static_cast<int>(time(0)); 
    srand(seed_random); 

    SinglyLinkedList<int> *list = new SinglyLinkedList<int>(); 
    for(int i = 0; i < 20; i++) {
        list->add(random() % 100); 
    }
    list->printList(); 
    int data; 
    cin >> data; 

    cout << endl << ((list->search(data)) ? "Found " : "NOT Found" )<< endl; 
    cin >> data; 
    list->remove(data); 
    cout << endl; 
    list->printList(); // print list.    
    return 0; 
}