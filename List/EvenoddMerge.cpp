#include "SinglyLinkedList.h"

/**
 * 
 * @name : evenOddMerge. 
 * 
*/


template <typename T> 
SinglyLinkedList<T> evenOddMerge(SinglyLinkedList<T> list)
{
    SinglyLinkedList<T> list1, list2;
    int i = 0;
    Node<T> *temp = list.getHead(), *head1  = NULL, *head2 = NULL, *temp_ = NULL; 
    while(temp)
    {
        temp_ = temp->getNext(); 
        if (i % 2 == 0)
        {
            if(list1.isEmpty())
            {
                list1.setHead(temp);
                head1 = list1.getHead(); 
            }
            else 
            {
                head1->setNext(temp);
                head1 = head1->getNext(); 
            }
        }
        else 
        {
            if(list2.isEmpty())
            {
                list2.setHead(temp);
                head2 = list2.getHead(); 
            } 
            else 
            {
                head2->setNext(temp);
                head2 = head2->getNext(); 
            }
        }

        temp = temp_;
        i++;  
    }

    head1->setNext(list2.getHead());
    return list1;  
}

int main(int argc, char* agrv[])
{
    SinglyLinkedList<int> list, list1;
    for (int i = 0; i < 10; i++)
        list.push_back(i);
    list.print();
    list1 = evenOddMerge(list);
    list1.print(); 
    return 0; 
}