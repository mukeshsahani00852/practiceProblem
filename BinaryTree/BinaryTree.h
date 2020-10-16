#ifndef BINARYTREE_H 
#define BINARYTREE_H 
#include <iostream>  
#include <cstdlib>
#include <stdexcept>  
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
        bool setLeft(BinaryTreeNode<T> *left);
        bool setRight(BinaryTreeNode<T> *right); 

    private:
        T data;
        BinaryTreeNode *left;
        BinaryTreeNode *right; 
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
BinaryTreeNode<T> *BinaryTreeNode<T>::getLefT() const 
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
    return true; 
}

template <typename T> 
bool BinaryTreeNode<T>::setRight(BinaryTreeNode<T> *right)
{
    this->right = right;
    return true; 
}

template <typename T> 
bool BinaryTreeNode<T>::setLeft(BinaryTreeNode<T> *left)
{
    this->left = left;
    return true; 
}

template <typename T> 
class BinaryTree 
{
    public:
        BinaryTree();
        bool insertKey(T key);
        bool levelOrderTraversal() const; 

    private:
        BinaryTreeNode<T> *root; 
}; 

template <typename T> 
BinaryTree<T>::BinaryTree()
{
    this->root = NULL; 
}

template <typname T> 
bool BinaryTree<T>::insertKey(T key)
{
    if(this->root == NULL)
    {
        this->root = new Node<T>(key); 
    }
    else 
    {
        Queue<BinaryTreeNode*> queue;
        queue.enQueue(this->root); 
        BinaryTReeNode* temp = NULL; 
        while(!queue.isEmpty())
        {
            temp = queue.deQueue(); 
            if(temp->left != NULL)
            {
                temp.enQueue(temp->left); 
            }
            else 
            {
                temp->left = new BinaryTreeNode<T>(key); 
                break; 
            }
            if(temp->right != NULL)
            {
                temp.enQueue(temp->right); 
            }
            else 
            {
                temp->right = new BinaryTreeNode<T>(key);
                break;
            }
        }
    }

    return true; 
}


template <typename T> 
bool BinaryTree<T>::levelOrderTraversal() const 
{
    if(this->root == NULL)
    {
        cout << "THIS IS A NULL TREE" << endl; 
    }
    else 
    {
        Queue<BinaryTreeNode*> queue; 
        BintaryTreeNode *root = NULL; 
        while(!queue.isEmpty())
        {
            
        }
    }
}


#endif 