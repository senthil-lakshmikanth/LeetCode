// Online C++ compiler to run C++ program online

// Replace the duplicates in the String.
// Testcase 1:
// Input: Java1234
// Output: Javb1234 (Remove the second ‘a’ as it is duplicated)
// Testcase 2:
// Input: Python1223: 
// Output: Python1234 (Replace the second 2 with 3, and replace 3 with 4 as 3 is
// replaced for the duplicated
// Testcase 3:
// Input: aBuzZ9900
// Output: aBuzC9012
// (Replace the second ‘Z’ with ‘C’ as ‘a’ and ‘B’ are already there in the String.
// Replace with capital C as the leer to be replaced is capital Z. The second 9
// turns out to be zero and the zero turns out to ‘1’ and the
// second zero turns out to ‘2’) 

#include <iostream>
#include <string>

using namespace std;

void replace_duplicates(string s)
{
    bool flag=1;
    
    for(int i=0; i<s.length(); i++)
    {
        for(int j=i+1; j<s.length(); j++)
        {
            if( isalpha(s[i]) and isalpha(s[j]) )
            {
                if(tolower(s[i]) == tolower(s[j]) )
                {
                    
                    switch(s[j])
                    {
                        case 'z' : s[j]='a';
                        break;
                        case 'Z' : s[j]='A';
                        break;
                        default : s[j]++;
                    }
                    
                    flag=0;
                }
            }
            else
            {
                if( s[i] == s[j] )
                {
                    (s[j]=='9') ? s[j]='0' : s[j]++;
                    
                    flag=0;
                }
                
            }
            
        }
    }
    
    if(flag)
        cout<<s<<endl;
    else
        replace_duplicates(s);
    
}

int main() 
{
    
    replace_duplicates("Java1234");
    replace_duplicates("Python1223");
    replace_duplicates("aBuzZ9900");

    return 0;
}
