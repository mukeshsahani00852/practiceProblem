#include "SinglyLinkedList.h"

/**
 * 
 * Testing SinglyLinked List. 
 * 
*/

int main(int argc, char *argv[])
{
    SinglyLinkedList<int> list;

    for (int i = 0; i < 20; i++)
    {
        list.push_back(random() % 100); 
    }
    list._print();
    cout << "length : " << list.length() << endl;
    list.pop_back();
    list._print();
    cout << "Length : " << list.length() << endl; 
    return 0;
}