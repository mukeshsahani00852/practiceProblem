#include "Stack.h"

int main(int argc, char* argv[])
{

    int num1 = 0, num2 = 0;
    Stack<int> stack;
    char input; 
    while((input = getchar()) != 'q')
    {
        if (input == 'p')
        {
            cout << stack._top() << endl; 
        }
        else if (input != ' ')
        {
            if(input == '+')
            {
                num1 = stack.pop();
                num2 = stack.pop();
                stack.push(num1 + num2);
            }
            else if(input == '-')
            {
                num1 = stack.pop();
                num2 = stack.pop();
                stack.push(num1 - num2); 
            }
            else if(input == '*')
            {
                num1 = stack.pop();
                num2 = stack.pop();
                stack.push(num1 * num2); 
            }
            else if(input == '/')
            {
                num1 = stack.pop();
                num2 = stack.pop();
                stack.push(num1 / num2); 
            }
            else 
            {
                int num1 = input - '0';
                stack.push(num1);
            }
        }
    }
    cout << "quit" << endl; 
    return 0;
}