#include <iostream>
#include <cstdlib>

using namespace std; 

int abs(int x) {
    if(x < 0) {
        return -1 * x; 
    } else {
        return x; 
    }
}

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

string intToString(int data) {
    string result;
    bool isNegative = false;
    if(data < 0) {
        isNegative = true; 
    }
    int temp = 0; 
    while(data) {
        temp = data % 10;
        result += abs(temp) + '0'; 
        data /= 10; 
    }
    if(isNegative) {
        result += '-'; 
    }

    return {result.rbegin(), result.rend()}; 
}

int main(int argc, char* argv[]) {
    string data; 
    cin >> data;
    cout << stringToInt(data) << endl;
    cout << intToString(stringToInt(data)) << endl; 
    return 0;
}