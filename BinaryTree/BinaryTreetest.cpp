// testing BinaryTree 
#include  "BinaryTree.h"

int main(int argc, char* argv[])
{

    BinaryTree<int> tree;
    for (int i = 0; i < 20; i++)
    {
        tree.insertKey(i); 
    }

    tree.levelOrderTraversal(); 

    return 0; 
}