#include <iostream> 
#include <cstdlib> 
#include "../stack/Stack.h"

int main(int argc, char* argv[]) {

    Stack<int> *stack = new Stack<int>(); // stack. 

    try {
        stack->push(322); 
        stack->push(322); 
        stack->print(); 
        cout << stack->pop();
        stack->push(11); 
        stack->print(); 
        cout << stack->pop(); 
        cout << stack->pop(); 
        cout << stack->pop();     
        
    } catch(logic_error &e) {
        cout << e.what(); 
    }

    delete stack; 


    return 0; 
}