#include <iostream> 
#include <cstdlib> 

using namespace std; 

bool oneReplaceAway(string str1, string str2) {
    bool isDifferent = false;
    for (int i = 0; i < str1.length(); i++) {
        if(str1[i] != str2[i]) {
            if(isDifferent) {
                return false; 
            } else {
                isDifferent = true; 
            }
        }
    }

    return true; 
}

bool oneInsertAway(string str1, string str2) {

    int index1 = 0, index2 = 0; 
    while(index1 < str1.length() && index2 < str2.length()) {
        if(str1[index1] != str2[index2]) {
            if(index1 != index2) {
                return false; 
            } else {
                index2++; 
            }
        }else {
            index1++;
            index2++; 
        }
    }
    return true; 
}

bool oneEditAway(string str1, string str2) {
    if(str1.length() == str2.length()) {
        return oneReplaceAway(str1, str2); 
    } else if(str1.length() == str2.length() + 1) {
        return oneInsertAway(str2, str1); 
    } else if(str1.length() + 1 == str2.length()) {
        return oneInsertAway(str1, str2); 
    }

    return false; 
}

int main(int argc, char* argv[]) {
    string data1, data2; 
    cin >> data1 >> data2;
    cout << oneEditAway(data1, data2); 

    return 0; 
}