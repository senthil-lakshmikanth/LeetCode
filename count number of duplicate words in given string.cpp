//  Program to count number of duplicate words in given string 
// input String :"Welcome to Java Session Session Session" 
// output :2

#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "Welcome to Java Session Session Session";

    stringstream ss(s);
    string word;

    unordered_map<string, int> freq;

    while(ss >> word)
        freq[word]++;

    int max = 0;
    for(auto p : freq)
    {
        if(p.second > max)
            max = p.second;
    }
    
    cout << max - 1;
    return 0;
}
