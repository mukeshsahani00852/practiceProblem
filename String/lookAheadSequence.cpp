#include <iostream>
#include <cstdlib> 
#include <string>

using namespace std;

string getNext(string s); 

string lookAhead(int n) 
{
    string s = "1";
    for (int i = 0; i < n; i++)
    {
        s = getNext(s); 
    }

    return s; 
}

string getNext(string s) 
{
    string result = "";
    int count = 0;
    char literal = s[0];
    cout << "literal " << literal << endl; 
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != literal) {
            result += count + '0';
            result += literal;
            count = 1;
            literal = s[i];
        }
        else {
            count++;  
        }
    }

    result += count + '0';
    result += literal; 

    return result; 
}

int main(int argc, char* argv[])
{
    int nTerm;
    cin >> nTerm;
    cout << lookAhead(nTerm) << endl; 
    return 0; 
}