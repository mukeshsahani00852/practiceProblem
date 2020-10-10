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



int main(int argc, char* argv[])
{
    srand(time(0));
    SinglyLinkedList<int> list1, list2;
    for (int i = 0; i < 20; i++)
    {
        list1.push_back(random() % 100); 
    }
    for (int i = 0; i < 11; i++)
    {
        list2.push_back(random() % 100); 
    }

    Node<int> *temp = list2.getHead(), *temp2 = list1.getHead(); 
    while(temp->getNext() != NULL){
        temp = temp->getNext();
        temp2 = temp2->getNext(); 
    }
    temp->setNext(temp2);

    Node<int> *node = overLappingNode<int>(list1, list2);
    cout << node << " " << node->getData() << endl;

    list1.print();
    list2.print(); 

    return 0;
}