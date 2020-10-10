#include "SinglyLinkedList.h"

template <typename T> 
SinglyLinkedList<T> mergeList(SinglyLinkedList<int> list1, SinglyLinkedList<int> list2) 
{
    SinglyLinkedList<T> list;
    Node<T> *head1 = list1.getHead(), *head2 = list2.getHead(); 

    while(head1 != NULL && head2 != NULL) 
    {
        if(head1->getData() < head2->getData())
        {
            list.push_back(head1->getData());
            head1 = head1->getNext(); 
        }
        else 
        {
            list.push_back(head2->getData());
            head2 = head2->getNext(); 
        }

    }

    while(head1 != NULL)
    {
        list.push_back(head1->getData());
        head1 = head1->getNext(); 
    }

    while(head2 != NULL)
    {
        list.push_back(head2->getData());
        head2 = head2->getNext(); 
    }

    return list; 
}

int main(int argc, char* argv[])
{

    SinglyLinkedList<int> list1, list2, list;
    list1.push_back(2);
    list1.push_back(5);
    list1.push_back(7);

    list2.push_back(3);
    list2.push_back(11);

    list = mergeList<int>(list1, list2);
    list.print(); 

    return 0;
}