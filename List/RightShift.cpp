#include "SinglyLinkedList.h"

template <typename T> 
void RightShiftBy_k(SinglyLinkedList<T> &list, int k)
{
    if(list.getHead() == NULL || k == 0) {
        return; 
    }
    int len = 0;
    Node<T> *tail = list.getHead(); 
    while(tail->getNext() != NULL) 
    {
        ++len;
        tail = tail->getNext(); 
    }
    k %= len;
    int tailShift = len - k + 1;
    // tail->next = list.getHead();
    tail->setNext(list.getHead()); 
    Node<T> *newTail = tail, *newHead = NULL;
    while (tailShift--)
    {
        newTail = newTail->getNext(); 
    }
    newHead = newTail->getNext();
    newTail->setNext(NULL); 
    list.setHead(newHead);
}

int main(int argc, char*argv[])
{
    SinglyLinkedList<int> list;
    list.push_back(2);
    list.push_back(3);
    list.push_back(5);
    list.push_back(3);
    list.push_back(2);
    list.print();

    RightShiftBy_k(list, 3);
    list.print(); 

    return 0; 
}