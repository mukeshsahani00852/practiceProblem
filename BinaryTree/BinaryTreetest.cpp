#include "BinaryTree.h"

int main(int argc, char* argv[])
{
    BinaryTree<int> tree; // binary tree
    for (int i = 0; i < 20; i++)
    {
        tree.insertKey(random() % 200); 
    }

    cout << tree.getRoot()->getData() << endl;

    return 0; 
}