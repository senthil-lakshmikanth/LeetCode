// Online C++ compiler to run C++ program online

// Find the strength of the given password string based on the condions
// Four rules were given based on the type and no. of characters in the string.
// Input : Qw!1 Output: Weak
// Input: Qwertyuiop Output: Medium
// Input: QwertY123 Output: Good
// Input: Qwerty@123 Output: Strong 

#include <iostream>

using namespace std;

void password_strength(string s)
{
    int Caps = 0, Smallcase = 0, digit = 0, special_character = 0;
    for(int i=0; i<s.length(); i++)
    {
        if (isupper(s[i]))  Caps = 1;
        if (islower(s[i]))  Smallcase = 1;
        if (isdigit(s[i]))  digit = 1;
        if (!isalnum(s[i])) special_character = 1;
    }
    
    if( s.length() > 8 )
    {
        if( Caps==1 and Smallcase==1 and digit==0 and special_character==0 )
            cout<<"The strength of \""<<s<<"\" is : Medium"<<endl;
        if( Caps==1 and Smallcase==1 and digit==1 and special_character==0 )
            cout<<"The strength of \""<<s<<"\" is : Good"<<endl;
        if( Caps==1 and Smallcase==1 and digit==1 and special_character==1 )
            cout<<"The strength of \""<<s<<"\" is : Strong"<<endl;
    }
    else
        cout<<"The strength of \""<<s<<"\" is : Weak"<<endl;
}

int main() 
{
    
    password_strength("Qw!1");
    password_strength("Qwertyuiop");
    password_strength("QwertY123");
    password_strength("Qwerty@123");
    
    return 0;
}
