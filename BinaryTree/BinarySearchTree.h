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
    if(key < node->getData()) {
        if(node->getLeft() == NULL) {
            node->setLeft(new BinaryTreeNode<T>(key)); 
            return true; 
        } else {
            return this->insertKey(node->getLeft(), key); 
            
        }
    } else {
        if(node->getRight() == NULL) {
            node->setRight(new BinaryTreeNode<T>(key)); 
            return true; 
        } else {
            return this->insertKey(node->getRight(), key); 
        }
    }
}

template <typename T> 
bool BinarySearchTree<T>::insertKey(T key) {
    if(this->root == NULL) {
        this->root = new BinaryTreeNode<T>(key);
        return true;  
    } else {
        return this->insertKey(this->root, key);
    }
}

#endif 