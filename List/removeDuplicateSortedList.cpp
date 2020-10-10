#include "SinglyLinkedList.h"

template <typename T> 
void removeDuplicateFromSortedList(SinglyLinkedList<T> &list)
{
    Node<T> *node = list.getHead(); 
    while(node->next != NULL)
    {
        if(node->getData() == node->getNext()->getData())
        {
            node->setNext(node->getNext()->getNext()); 
        } else {
            node = node->getNext(); 
        }
    }
}

int main(int argc, char* argv[])
{
    SinglyLinkedList<int> list;
    list.push_back(2);
    list.push_back(2);
    list.push_back(3);
    list.push_back(7);
    list.push_back(11);
    list.push_back(11);

    list.print();

    removeDuplicateFromSortedList(list);
    list.print(); 

    return 0;
}