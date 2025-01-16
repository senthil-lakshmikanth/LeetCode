// Online C++ compiler to run C++ program online

// To remove specic characters in the String .For example,
// If the original string is "Alive is awesome" and the user inputs string to remove
// "alwsr" then it should print "ive i eome" as output .
// If the original string is "Learning never stops" and the user inputs string to
// remove "estp" then the it should print "Larning nvr o" as output . 

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    
    string og_str="AliVe is awesome";
    string sub_str="alwsr";
    
    for(int i=0; i<og_str.length(); i++)
    {
        bool found = true;

        for(int j=0; j<sub_str.length(); j++)
        {
            if(tolower(og_str[i])==tolower(sub_str[j]))
            {
                found=false;
                break;
            }
        }
        if(found)
            cout<<og_str[i];

    }
    

    return 0;
}
