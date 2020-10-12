#ifndef STACK_H 
#define STACK_H 

template <typename T> 
class Node 
{
    public:
        Node();
        Node(T key);
        bool setData(T key);
        bool setNext(Node<T> *next);
        int length() const;
        T getData() const;
        Node<T> *getNext() const;

    private:
        int data;
        Node<T> *next;
        int size = 0; 
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



#endif 