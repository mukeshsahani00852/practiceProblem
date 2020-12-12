#ifndef BINARYTREE_H 
#define BINARYTREE_H 
#include <iostream> 
#include <cstdlib> 
#include "Queue.h"

using namespace std; 



template <typename T> 
class BinaryTreeNode 
{
    public:
        BinaryTreeNode();
        BinaryTreeNode(T data); 
        T getData() const;
        BinaryTreeNode<T> *getLeft() const;
        BinaryTreeNode<T> *getRight() const;
        bool setData(T data);
        bool setLeft(BinaryTreeNode<T> *node);
        bool setRight(BinaryTreeNode<T> *node); 

    private:
        T data; 
        BinaryTreeNode<T> *left; 
        BinaryTreeNode<T> *right; 

}; 

template <typename T> 
BinaryTreeNode<T>::BinaryTreeNode()
{
    this->left = NULL;
    this->right = NULL; 
}

template <typename T> 
BinaryTreeNode<T>::BinaryTreeNode(T data)
{
    this->data = data;
    this->left = NULL;
    this->right = NULL; 
}

template <typename T> 
T BinaryTreeNode<T>::getData() const 
{
    return this->data; 
}

template <typename T> 
BinaryTreeNode<T> *BinaryTreeNode<T>::getLeft() const 
{
    return this->left; 
}

template <typename T> 
BinaryTreeNode<T>* BinaryTreeNode<T>::getRight() const 
{
    return this->right; 
}

template <typename T> 
bool BinaryTreeNode<T>::setData(T data)
{
    this->data = data; 
}

template <typename T>
bool BinaryTreeNode<T>::setLeft(BinaryTreeNode<T> *node)
{
    this->left = node; 
    return true; 
}

template <typename T> 
bool BinaryTreeNode<T>::setRight(BinaryTreeNode<T> *node)
{
    this->right = node;
    return true; 
}


template <typename T> 
class BinaryTree 
{
    public:
        BinaryTree();
        bool insertKey(T key);
        BinaryTreeNode<T> *getRoot() const; 
        void levelOrderTraversal() const; 

    private:
        BinaryTreeNode<T> *root; 
}; 

template <typename T> 
BinaryTree<T>::BinaryTree()
{
    this->root = NULL; 
}

template <typename T> 
bool BinaryTree<T>::insertKey(T key)
{
    if(this->root == NULL) 
    {
        this->root = new BinaryTreeNode<T>(key);
    }
    else 
    {
        Queue<BinaryTreeNode<T>*> queue;
        queue.enQueue(this->root); 
        BinaryTreeNode<T> *temp = NULL; 
        while(!queue.isEmpty())
        {
            temp = queue.deQueue(); 
            if(temp->getLeft() == NULL)
            {
                temp->setLeft(new BinaryTreeNode<T>(key));
                break; 
            }
            else 
            {
                queue.enQueue(temp->getLeft()); 
            }
            if(temp->getRight()  == NULL)
            {
                temp->setRight(new BinaryTreeNode<T>(key));
                break; 
            }
            else 
            {
                queue.enQueue(temp->getRight()); 
            }
        }
    }
    return true; 
}

template <typename T> 
BinaryTreeNode<T> *BinaryTree<T>::getRoot() const 
{
    return this->root; 
}

template <typename T> 
void BinaryTree<T>::levelOrderTraversal() const 
{
    BinaryTreeNode<T> *temp = this->getRoot();
    Queue<BinaryTreeNode<T>*> queue;
    queue.enQueue(temp); 
    while (!queue.isEmpty())
    {
        temp = queue.deQueue();
        cout << temp->getData() << ", "; 
        if (temp->getLeft() != NULL)
        {
            queue.enQueue(temp->getLeft()); 
        }
        if(temp->getRight() != NULL) 
        {
            queue.enQueue(temp->getRight()); 
        }
    }
    cout << endl; 
}

#endif 