#include "BinaryTree.h"
#include "Queue.h"
#include <vector> 


template <typename T> 
vector<vector<T>> getLevelWiseKey(BinaryTree<T> btree)
{
    vector<vector<T>> result;
    
    return result; 
}

int main(int argc, char* argv[])
{
    BinaryTree<int> tree; // binary tree
    for (int i = 0; i < 20; i++)
    {
        tree.insertKey(i); 
    }
    tree.levelOrderTraversal(); 

    return 0; 
}