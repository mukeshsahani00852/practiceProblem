#include "Queue.h"

int main(int argc, char* argv[])
{
    Queue<int> queue;
    for (int i = 0; i < 20; i++)
        queue.enQueue(random() % 100);
    int value = queue.deQueue();
    cout << value << endl; 
    
    return 0; 
}