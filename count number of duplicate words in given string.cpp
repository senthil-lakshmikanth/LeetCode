// Online C++ compiler to run C++ program online
// Program to count number of duplicate words in given string
// input String :"Welcome to Java Session Session Session"
// output :2

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Enter string with duplicate values : ";
    getline(cin,s); //cin >> s; doesn't allow whitespaces.
    string prevword = ""; 
    string word, compareword;
    int finalcount=0;
    int count=0;

    
    for(int i=0; i<s.length()+1; i++) // traversing through the string to grep every word.
    {
        if(s[i]==' ' || s[i]=='\0') // if we encounter space or null character ("end of string")
        {
            count=0;
            for(int j=0; j<s.length()+1; j++) // traverse again through the string to fetch every word and compare with.
            {
                if(s[j]==' ' || s[j]=='\0')
                {
                    if(word==compareword and prevword != compareword) // once we encountered duplicate value and the count is greater than 1, we do not compare that word again.
                    {
                        count++;
                    }
                    compareword="";
                }
                else
                {
                    compareword=compareword+s[j];
                }
                
            }
            if(count > 1)
            {
                finalcount=finalcount+count-1; // count becomes 1 when comparing for the first time. so minus 1. [ NOTE: Try, we can initialize 'j' loop to 'i' index to start from the next the current position instead of starting from the first everytime. ]
                prevword = word;
            }
            word="";
        }
        else
        {
            word=word+s[i];
        }
        
    }
    cout<<finalcount<<endl;
    return 0;
}
