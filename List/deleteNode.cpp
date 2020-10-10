#include "SinglyLinkedList.h"

template <typename T>//  provided that not is not the tail node. 
void deleteNode(Node<T> **node)
{
    Node<T> *temp = (*node)->getNext(); 
    (*node)->setData((*node)->getNext()->getData());
    (*node)->setNext((*node)->getNext()->getNext());
    delete temp; 

}

int main(int argc, char* argv[])
{
    srand(time(0));
    SinglyLinkedList<int> list;
    for (int i = 0; i < 20; i++)
    {
        list.push_back(random() % 100); 
    }
    list.print();

    Node<int> *temp = list.getHead(); 
    for(int i = 0; i < 10; i++)
    {
        temp = temp->getNext(); 
    }

    deleteNode<int>(&temp);

    list.print(); 

    return 0; 
}