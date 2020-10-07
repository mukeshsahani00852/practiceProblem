#include <iostream> 
#include <cstdlib>

using namespace std; 

string DeCoding(const string &data) 
{
    string result;
    string temp = ""; 
    int index = 0;
    while (index != (data.length() - 1)) {
        if(isdigit(data[index])) {
            for (int i = 0; i < (data[index] - '0'); i++)
            {
                temp += data[index + 1]; 
            }
            result += temp;
            temp = "";
            index += 1; 
        } else {
            ++index; 
        }
    }
    return result; 
}


string EnCoding(const string &data) 
{
    int count = 0;
    char literal = data[0];
    string result = ""; 
    for (int i = 0; i < data.length(); i++)
    {
        if(data[i] != literal) {
            result += count + '0';
            result += literal; 
            literal = data[i];
            count = 1; 
        } 
        else 
        {
            count++; 
        }
    }
    result += count + '0'; 
    result += literal;

    return result; 
}

int main(int argc, char* argv[])
{
    string data;
    cin >> data;
    cout << EnCoding(data) << endl;
    cout << DeCoding(EnCoding(data)) << endl; 
    return 0;
}