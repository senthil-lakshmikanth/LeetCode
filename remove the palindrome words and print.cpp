// Given a sentence of string, in that remove the palindrome words and print the 
// remaining. 
// Input: 
// He did a good deed 
// Output: 
// He good 
// Input: 
// Hari speaks malayalam 
// Output: 
// Hari speaks 

#include <iostream>

using namespace std;

void isPalindrome(string s)
{
    int left = 0;
    int right = s.size() - 1;

    bool flag = 0;
    while (left < right)
    {
        if(s[left++] != s[right--])
            flag = 1;
    }

    if(flag)
        cout << s << " ";
}

int main()
{
    string s = "He did a good deed";
    string word = "";
    
    for(int i = 0; i <= s.size(); i++)
    {
        if(s[i] == ' ' || i == s.size())
        {
            isPalindrome(word);
            word = "";
        }
        else
            word += s[i];
    }
}
