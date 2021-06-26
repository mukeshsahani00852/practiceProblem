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

    BinarySearchTree<int> tree; // binary tree

    tree.insertKey(12); 
    tree.insertKey(5); 
    tree.insertKey(8); 
    tree.insertKey(2); 
    tree.insertKey(1); 
    tree.insertKey(3); 
    tree.insertKey(6); 
    tree.insertKey(7); 
    tree.insertKey(9); 
    tree.insertKey(15); 
    tree.insertKey(13); 
    tree.insertKey(14); 
    tree.insertKey(12);
    tree.insertKey(18); 
    tree.insertKey(17); 
    tree.insertKey(19); 



    tree.levelOrderTraversal();
    cout << endl; 

    tree.inorderTraversal(); 
    cout << endl; 


    cout << tree.height() << endl; 

    cout << tree.numberOfNodes() << endl; 

    return 0; 
}