#include "BinaryTree.h"
#include "BinarySearchTree.h"
#include "Queue.h"
#include <vector> 
#include <ctime> 


template <typename T> 
vector<vector<T>> getLevelWiseKey(BinaryTree<T> btree)
{
    vector<vector<T>> result;
    
    return result; 
}

int main(int argc, char* argv[])
{
    int seed_random = static_cast<int>(time(0)); 
    srand(seed_random); 

    BinaryTree<int> tree; // binary tree
    for (int i = 0; i < 10; i++)
    {
        tree.insertKey(i); 
    }
    tree.levelOrderTraversal(); 
    cout << tree.height() << endl; 
    return 0; 
}