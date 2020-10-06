#include <iostream> 
#include <cstdlib>

using namespace std;  

int findSpaceInString(string data, int from)
{
    if(from >= data.length())
        return -1; 

    for (int i = from; i < data.length(); i++)
    {
        if(data[i] == ' ')
            return i; 
    }
    return data.length(); 
}

string revereStringWord(string data) {
    int i = 0, j = data.length() - 1;
    char temp = 0; 
    while (i < j)
    {
        temp = data[i];
        data[i] = data[j];
        data[j] = temp;
        i++;
        j--;
    }
    int spaceEncounter = findSpaceInString(data, 0);
    i = 0;
    while (spaceEncounter != -1)
    {
        j = spaceEncounter - 1; 
        while(i < j) 
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
            j--;
            i++; 
        }
        i = spaceEncounter + 1; 
        spaceEncounter = findSpaceInString(data,i);
    }

    return data; 
}

int main(int argc, char* argv[])
{
    string data;
    getline(cin, data);
    string result =  revereStringWord(data);
    cout << result << endl; 
    return 0;
}