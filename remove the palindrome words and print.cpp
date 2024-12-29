// Online C++ compiler to run C++ program online
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
#include <string>

using namespace std;

int main() 
{
    
    string s;
    cout<<"Enter the string to remove the palindrome words and print : ";
    getline(cin, s);
    
    Given a sentence of string, in that remove the palindrome words and print the
remaining.
Input:
He did a good deed
Output:
He good
Input:
Hari speaks malayalam
Output:
Hari speaks

    string word="";
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            int word_last_index=word.length();
            for(int j=0; j<word.length()/2; j++)
            {
                if(word[j]!=word[word_last_index-1])
                {
                    cout<<word;
                    break;
                }
                cout<<" ";
                word_last_index--;
            }
            word="";
        }
        else
        {
            word=word+s[i];
        }
    }
    return 0;
}
