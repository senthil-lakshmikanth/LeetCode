// Online C++ compiler to run C++ program online
// Write a Java program or function which prints all substrings of a given string.
// Your program should take input string from the user and print it’s all possible
// substrings. For example, if “Java” is the input string then its all possible
// substrings are,
// J
// Ja
// Jav
// Java
// a
// av
// ava
// v
// va
// a 

#include <iostream>
#include <string>

using namespace std;
int main() 
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    
    string temp_string="";
    
    for(int i=0; i<s.length(); i++)
    {
        for(int j=i; j<s.length(); j++)
        {
            temp_string=temp_string+s[j];
            cout<<temp_string<<endl;
        }
        temp_string="";
    }
    
    return 0;
}
