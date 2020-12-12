#include "LinkedList.h"

/**
 *  
 * problem related to linked list. 
 * 
*/

LinkedListNode* kthNodeFromLast(LinkedList *list, int k); // get the kth from last. 

LinkedListNode* kthNodeFromLast(LinkedListNode *node, int &i, int k); // get the kth node from last. 

int main(int argc, char* argv[]) {

    LinkedList *list = new LinkedList(); 
    for(int i = 0; i < 20; i++) {
        list->insertKey(rand() % 100); 
    }
    list->printList(); 
    cout << endl; 
    int k = 0; 
    cin >> k; 
    cout << kthNodeFromLast(list, k)->getData() << endl; 

}


LinkedListNode* kthNodeFromLast(LinkedList *list, int k) {
    int i = 0; 
    return kthNodeFromLast(list->getHead(), i, k);  
}

LinkedListNode* kthNodeFromLast(LinkedListNode *head, int &i, int k) {
    if(head == NULL) {
        return NULL; 
    } else {
        LinkedListNode *node = kthNodeFromLast(head->getNext(), i, k); 
        i += 1; 
        if(i == k) {
            return head; 
        } 
        return node; 
    }
}

