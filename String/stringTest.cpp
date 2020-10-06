#include <iostream> 
#include <cstdlib>

using namespace std; 

int main(int argc, char* argv[])
{
    string data = "Value";
    data[0] = 'P';
    cout << data; 

    return 0; 
}