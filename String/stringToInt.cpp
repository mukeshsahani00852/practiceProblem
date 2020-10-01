#include <iostream>
#include <cstdlib>

using namespace std; 

int stringToInt(string data) {
    int start = 0, index = 0, temp = 0, result = 0;
    bool isNegative = false; 
    if(data[0] == '-') {
        isNegative = true; 
        start = 1; 
    }
    for (index = start; index < data.length(); ++index) {
        temp = data[index] - '0';
        result = result * 10 + temp; 
    }    
    return (isNegative == true) ? -1 * result : result; 
}

int main(int argc, char* argv[]) {
    string data; 
    cin >> data;
    cout << stringToInt(data) << endl; 
    return 0; 
}