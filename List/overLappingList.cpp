#include "SinglyLinkedList.h"

template <typename T> 
void AdvancePointer(int advanceCount, Node<T> **pointer)
{
    while(advanceCount--)
    {
        *pointer = (*pointer)->getNext(); 
    }
}

template <typename T> 
Node<T> *overLappingNode(SinglyLinkedList<int> list1, SinglyLinkedList<int> list2)
{
    int len1 = list1.length(), len2 = list2.length();
    Node<T> *current1 = list1.getHead(), *current2 = list2.getHead();
    AdvancePointer(abs(len1 - len2), len1 > len2 ? &current1 : &current2); 
    while(current1 && current1 && current1 != current2) 
    {
        current1 = current1->getNext();
        current2 = current2->getNext(); 
    }

    return current1;
}

template <typename T> 
void AdvancePointer(int advanceCount, Node<T> **pointer)
{
    while(advanceCount--)
    {
        *pointer = (*pointer)->getNext(); 
    }
}


int main(int argc, char* argv[])
{

    return 0;
}