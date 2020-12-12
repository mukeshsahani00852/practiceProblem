#include <iostream> 
#include <cstdlib> 
#include <string> 
#include <vector> 

using namespace std; 

bool isUnique(string str) {
    int *content = (int *)calloc(128, sizeof(int));
    for (int i = 0; i < str.length(); i++)
    {
        content[(int)str[i]]++; 
        if(content[(int)str[i]] > 1) {
            return false; 
        }
    }
    return true;
}

int main(int argc, char* argv[]) {
    string data;
    cin >> data;
    cout << isUnique(data) << endl; 

    return 0;
}