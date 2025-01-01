// Online C++ compiler to run C++ program online
// Reverse the string with preserving the position of spaces :
// Write a Java program to reverse a string with preserving the position of spaces.
// For example, if “I Am Not String” is the given string then the reverse of this
// string with preserving the position of spaces is “g ni rtS toNmAI”.
// Output :
// I Am Not String —> g ni rtS toNmAI
// JAVA JSP ANDROID —> DIOR DNA PSJAVAJ
// 1 22 333 4444 55555 —> 5 55 554 4443 33221 

#include <iostream>
#include <string>

using namespace std;
int main() 
{
    string s; 
    cout<<"Enter a string with white spaces : ";
    getline(cin,s); // Example : "I Am Not String"
    
    string reversed_string_without_space="";

    int array[s.length()]={};
    int array_index=0;
    
    for(int i=0; i<s.length();i++)
        if(s[i]==' ')
            array[array_index++]=i;  // 1480000000000
            
    for(int i=s.length()-1; i>=0;i--)
        if(s[i]!=' ')
            reversed_string_without_space=reversed_string_without_space+s[i]; //gnirtStoNmAI
            
    array_index=0; 
    int string_index=0;
    for(int i=0; i<s.length(); i++) // Iterate or Traverse through the string length number of times.
    {
        if(array[array_index]==i)
        {
            cout<<" ";  //Print space on the particular index of the string.
            array_index++; //Update index of the array
        }
        else
        cout<<reversed_string_without_space[string_index++]; //Print the reversed string and update the string index after everytime it gets print or the else part gets executed.
    }
    
    return 0;
}
