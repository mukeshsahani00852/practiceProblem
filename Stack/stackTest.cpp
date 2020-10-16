#include "Stack.h"

int main(int argc, char* argv[])
{
    Stack<int> stack;
    stack.push(12);
    stack.push(11);
    stack.push(433);
    cout << stack.pop() << " " << stack.pop() << " " << stack.pop() << endl; 

    return 0; 
}