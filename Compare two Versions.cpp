// Online C++ compiler to run C++ program online

// Print whether the version is upgraded, downgraded or not changed
// according to the input given.
// example:
// Input : Version1 4.8.2 Version2 4.8.4
// Output: upgraded,
// Input : Version1 4.0.2 Version2 4.8.4
// Output: downgraded 

#include <iostream>
#include <string>

using namespace std;

int compare_and_print(int v1[], int v2[], int index)
{
    
    if(v2[index] > v1[index] and index < 3)
        return 1;
    if(v2[index] < v1[index] and index < 3)
        return 0;
    if(v2[index] == v1[index] and index < 3)
        return compare_and_print(v1, v2, index+1);
    return 2;
}

void version_compare(string v1, string v2)
{
    int substr = 0;
    int index = 0;
    int subv1[3], subv2[3];
    
    for(int i = 0; i <= v1.length(); i++)
    {
        if(v1[i]!='.' and v1[i]!='\0')
        {
            substr = (substr * 10) + (v1[i] - '0'); // character to integer.
        }
        else
        {
            subv1[index++]=substr;
            substr = 0;
        }
    }
    
    index = 0;
    substr = 0;
    for(int i = 0; i <= v2.length(); i++)
    {
        if(v2[i]!='.' and v2[i]!='\0')
            substr = (substr * 10) + (v2[i] - '0');
        else
        {
            subv2[index++]=substr;
            substr = 0;
        }
    }
    
    int flag = compare_and_print(subv1, subv2, 0);
    
    if(flag==2)
        cout<<"Same Version"<<endl;
    if(flag==1)
        cout<<"Upgraded"<<endl;
    if(flag==0)
        cout<<"Downgraded"<<endl;
    
}

int main() 
{
    version_compare("1.0.31", "1.0.27");
    version_compare("1.0.10", "1.0.27");
    version_compare("4.8.2", "4.8.2");
    version_compare("4.0.2", "4.8.4");
    
    return 0;
}
