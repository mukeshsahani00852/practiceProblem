#include <iostream>
#include <cstdlib>  

using namespace std; 

bool isPalidromicString(string data) {
    int i = 0, j = data.length() - 1;
    for (; j > i; ++i, --j) {
        if(data[i] != data[j])
            return false; 
    }
    return true; 
}

int main(int argc, char* argv[]) {
    string data;
    cin >> data;
    cout << (isPalidromicString(data) ? "Palidromic" : "Not palidromic");
    cout << endl; 
    return 0;
}