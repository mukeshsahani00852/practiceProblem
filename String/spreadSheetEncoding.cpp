#include <iostream>
#include <cstdlib> 

using namespace std; 

int Decode(string str) 
{
    int decode = 0, temp = 0; 
    for (int i = 0; i < str.length(); ++i)
    {
        temp = str[i] - 'A';
        decode = decode * 26 + temp + 1; 
    }

    return decode; 
}

string Encode(int value) 
{
    string result; 
    int temp = 0;
    while (value > 0)
    {
        temp = value % 26;
        value = value / 26;
        if(temp == 0) 
        {
            temp = 26;
            value--; 
        }
        result += temp + 'A' - 1;
        
        // --value;
    }

    return {result.rbegin(), result.rend()}; 
}

int main(int argc, char* argv[]) 
{
    string data; 
    cin >> data;
    cout << Decode(data) << endl;
    cout << Encode(Decode(data)) << endl;
    return 0;
}