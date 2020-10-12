#include "SinglyLinkedList.h"

template <typename T> 
SinglyLinkedList<T> reverseList(SinglyLinkedList<T> &list)
{

    Node<T> *tempHead = NULL, *temp = NULL, *head = list.getHead(); 
    while(head) {
        temp = head->getNext();
        if (tempHead == NULL)
        {
            tempHead = head;
        }
        else
        {
            head->setNext(tempHead);
            tempHead = head;
        }
        head = temp;
    }
    SinglyLinkedList<T> list1; 
    list1.setHead(tempHead);
    return list1; 
}

int main(int argc, char* argv[])
{
    SinglyLinkedList<int> list;
    for (int i = 0; i < 10; i++)
        list.push_back(i);
    list.print();
    list = reverseList(list); 

    return 0;
}