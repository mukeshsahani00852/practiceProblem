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
        void 

    private:
        int data;
        Node<T> *next;
}; 

#endif 