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
        T _top() const;
        void _empty();
        bool isEmpty() const; 

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
        this->top = new Node<T>(element); 
    } 
    else {
        Node<T> *node = new Node<T>(element);
        node->setNext(this->top);
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
        T element = this->top->getData();
        Node<T> *temp = this->top;
        this->top = this->top->getNext();
        delete temp;
        return element; 
    }
}

template <typename T> 
T Stack<T>::_top() const 
{
    if(this->top == NULL)
    {
        throw underflow_error("Stack is Empty"); 
    } 
    else 
    {
        return this->top->getData(); 
    }
}


template <typename T> 
int Stack<T>::length() const 
{
    return this->size; 
}

template <typename T> 
void Stack<T>::_empty()
{
    Node<T> *temp = this->head;
    Node<T> *previous = this->head; 
    while(temp != NULL)
    {
        previous = temp;
        temp = temp->getNext(); 
        delete temp;
    }

    this->head = NULL; 
}

template <typename T> 
bool Stack<T>::isEmpty() const
{
    return this->top == NULL; 
}

#endif 