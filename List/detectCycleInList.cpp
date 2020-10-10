#include "SinglyLinkedList.h"

template <typename T> 
Node<T>* hasCycleVersion1(SinglyLinkedList<T> list)
{
    Node<T> *outer = list.getHead(), *inner = nullptr;
    int i = 0, k = 0, count = 0; 
    while (outer)
    {
        inner = list.getHead(); 
        while (k <= i && inner != NULL)
        {
            if(inner == outer)
                count += 1;
            inner = inner->getNext();
            k += 1;
        }
        if(count == 2)
            return outer; 
        i += 1;
        k = 0;
        count = 0; 
        outer = outer->getNext();
    }

    return nullptr; 
}

int main(int argc, char *argv[])
{

    SinglyLinkedList<int> list;
    Node<int> *node1 = nullptr, *node2 = nullptr; 
    for (int i = 0; i < 20; i++)
        list.push_back(random() % 100);

    node1 = list.getHead()->getNext()->getNext();
    node2 = list.getHead(); 
    for (int i = 0; i < 10; i++)
        node2 = node2->getNext();
    node2->setNext(node1);
    Node<int> *cycle = hasCycleVersion1<int>(list);
    cout << cycle << endl; 

    
    return 0;
}