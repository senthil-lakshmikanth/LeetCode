// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s;
    string word="";
    cout<<"Enter the string to reverse each word : "
    getline(cin, s);
    
    for(int i=0; i<s.length()+1; i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            for(int j=word.length(); j>0; j--)
            {
                cout<<word[j-1];
            }
            cout<<" ";
            word="";
        }
        else
        {
            word = word + s[i];
        }
    }
    
    

    return 0;
}
