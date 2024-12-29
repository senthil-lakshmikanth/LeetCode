// Online C++ compiler to run C++ program online
// Given two strings, the task is to find if a string can be obtained by rotating
// another string can be obtained by rotating another string by n places.3
// Examples:
// Input:
// String1 = "amazon" String2="azonam" rotateCount=2
// Output:
// Yes
// Explanation :
// Rotating string1 by 2 places in anti-clockwise given the string2
// Input:
// String1 = "amazon" String2="zonama" rotateCount=3
// Output:
// Yes
// Explanation :
// Rotating string1 by 3 places in clockwise given the string2 


#include <iostream>
#include <string>

using namespace std;

int main() 
{
    
    string s1;
    cout<<"Enter string-1 to compare with string-2 : ";
    getline(cin, s1);
    string s2;
    cout<<"Enter string-2 to rotate and compare with string-1 : ";
    getline(cin, s2);
    
    char temp;
    int flag=1;
    
    for(int i=0; i<s1.length(); i++)
    {
        temp=s1[0];
        for(int j=0; j<s1.length()-1; j++)
        {
            s1[j]=s1[j+1];
        }
        s1[s1.length()-1]=temp;
        if(s1==s2)
        {
            cout<<"Yes"<<endl;
            cout<<"Rotate Count : "<<i+1;
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"The string doesn't match after rotating completely.";
    
    return 0;
}
