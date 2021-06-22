#ifndef BINARYSERACHTREE_H 
#define BINARYSERACHTREE_H 

#include "BinaryTree.h"

template <typename T> 
class BinarySearchTree : public BinaryTree<T> 
{
    public: 
        BinarySearchTree(); 
        bool insertKey(T key); 
    protected: 
        bool insertKey(BinaryTreeNode<T> *node, int key); 
}; 

template <typename T> 
BinarySearchTree<T>::BinarySearchTree() {
    // default constructor. 
}

template <typename T> 
bool BinarySearchTree<T>::insertKey(BinaryTreeNode<T> *node, int key) {

}

template <typename T> 
bool BinarySearchTree<T>::insertKey(T key) {

}

#endif 