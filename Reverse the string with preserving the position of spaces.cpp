// Reverse the string with preserving the position of spaces : 
// Write a Java program to reverse a string with preserving the position of spaces. 
// For example, if “I Am Not String” is the given string then the reverse of this 
// string with preserving the position of spaces is “g ni rtS toNmAI”. 
// Output : 
// I Am Not String —> g ni rtS toNmAI 
// JAVA JSP ANDROID —> DIOR DNA PSJAVAJ 
// 1 22 333 4444 55555 —> 5 55 554 4443 33221 

#include <iostream>

using namespace std;

int main()
{
    string s = "I Am Not String"; 
    string rev = "";
    int index = 0;

    for(int i = s.size() - 1; i >= 0; i--)
        if(s[i] != ' ')
            rev += s[i];
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
            cout << " ";
        else
            cout << rev[index++];
    }

    return 0;
}
