#include "Stack.h"

template <typename T> 
int isIn(T *arr, T key, int len) // return -1 is not found , if found return the index. 
{
    for (int i = 0; i < len; i++)
    {
        if(arr[i] == key)
            return i; 
    }
    return -1; 
}



int main(int argc, char* argv[])
{

    char openBracket[3] = {'(', '[', '{'}; // open brackets.
    char closeBracket[3] = {')', ']', '}'}; // close brackets.
    bool isBalanced = true;
    char temp; 
    string input;
    cin >> input;
    Stack<char> stack; 
    while (input != "QUIT" || input != "quit")
    {
        for (int i = 0; i < input.length(); i++)
        {
            if(isIn(openBracket, input[i], 3) != -1)
            {
                stack.push(input[i]);
            }
            else 
            {
                try
                {
                    if (isIn(openBracket, stack.pop(), 3) != isIn(closeBracket,input[i], 3))
                    {
                        isBalanced = false;
                        break; 
                    }
                }
                catch(underflow_error &e)
                {
                    isBalanced = false;
                    break;
                }
            }
        }
        if(!stack.isEmpty())
        {
            isBalanced = false; 
        }
        if(isBalanced)
        {
            cout << "Expression is balanced " << endl; 
        }
        else 
        {
            cout << "Expression is not balanced" << endl; 
        }
        cin >> input;
    }

    return 0; 
}