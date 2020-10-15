#ifndef STACK_H 
#define STACK_H 
#include <iostream>
#include <cstdlib> 
#include <stdexcept> 

using namespace std; 

template <typename T> 
class Node 
{
    public:
        Node();
        Node(T key);
        bool setData(T key);
        bool setNext(Node<T> *next);
        T getData() const;
        Node<T> *getNext() const;

    private:
        int data;
        Node<T> *next;
};

template <typename T> 
Node<T>::Node()
{
    this->next = NULL;
}

template <typename T> 
Node<T>::Node(T key)
{
    this->data = key;
    this->next = NULL; 
}

template <typename T> 
bool Node<T>::setData(T key)
{
    this->data = key; 
}

template <typename T> 
bool Node<T>::setNext(Node<T> *next)
{
    this->next = next; 
}

template <typename T> 
T Node<T>::getData() const 
{
    return this->data; 
}

template <typename T> 
Node<T>* Node<T>::getNext() const 
{
    return this->next; 
}


template <typename T> 
class Stack 
{
    public:
        Stack();
        bool push(T element);
        T pop();
        int length() const; 

    private:
        int size = 0;
        Node<T> *top; 
};

template <typename T> 
Stack<T>::Stack()
{
    this->top = NULL; 
}

template <typename T> 
bool Stack<T>::push(T element)
{
    if(this->top == NULL)
    {
        this->top = new Node(element); 
    } 
    else {
        Node<T> *node = new Node(element);
        node->next = this->top;
        this->top = node; 
    }
    ++size;
    return true;
}

template <typename T> 
T Stack<T>::pop()
{
    if(this->top == NULL)
    {
        throw underflow_error("Stack underflow."); 
    } 
    else {
        T element = this->top->getData;
        Node<T> *temp = this->top;
        this->top = this->top->getNext();
        delete temp;
        return element; 
    }
}

template <typename T> 
int Stack<T>::length() const 
{
    return this->size; 
}

#endif 