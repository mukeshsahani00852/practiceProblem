#ifndef BINARYTREENODE_H 
#define BINARYTREENODE_H 

template <typename T> 
class BinaryTreeNode {
    public: 
        BinaryTreeNode(); 

    private: 
        T data; 
        BinaryTreeNode *left; 
        BinaryTreeNode *right; 
}; 

#endif 