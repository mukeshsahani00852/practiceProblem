#ifndef BINARYTREENODE_H 
#define BINARYTREENODE_H 

template <typename T> 
class BinaryTreeNode {
    public: 
        BinaryTreeNode(); 
        void getData() const; 
        void setData(T data); 
        BinaryTreeNode<T> *getLeft() const; 
        BinaryTreeNode<T> *getRight() const; 
        void setLeft(BinaryTreeNode<T> *new_left); 
        void setRight(BinaryTreeNode<T> *new_right); 
    private: 
        T data; 
        BinaryTreeNode *left; 
        BinaryTreeNode *right; 
}; 

template <typename T> 
BinaryTreeNode<T>::BinaryTreeNode() {
    this->left = None; 
    this->right = None; 
}

template <typename T> 
void BinaryTreeNode<T>::getData() const {
    return this->data; 
}

template <typename T> 
void BinaryTreeNode<T>::setData(T data) {
    this->data = data; 
}



#endif 