#include <iostream>
#include <cstdlib>

using namespace std; 

bool isPalidromc(string data) 
{
    int i = 0, j = data.length() - 1; 
    while(i < j) 
    {
        while(!isalnum(data[i]) && i < j) 
        {
            ++i; 
        }
        while(!isalnum(data[j]) && i < j)
        {
            --j; 
        }
        if(tolower(data[i++]) != tolower(data[j--]))
            return false; 
    }
    return true; 
}

int main(int argc, char* argv[])
{
    string str;
    cin >> str;
    string result = isPalidromc(str) ? "Palidromic" : "Not palidromic"; 
    cout << result << endl; 

    return 0; 
}