// Online C++ compiler to run C++ program online

// Reverse the words in the given String1 from the rst occurrence of String2 in  String1 by maintaining white Spaces.
// example:
// Input:
// String1 = This is a test String only
// String2 = st
// Output: This is a only String test 

#include <iostream>
#include <string>

using namespace std;

int issubstr(string main_string, string substr)
{
    int substr_index = 0, count =0, flag = 0;
    for(int i=0; i<main_string.length(); i++)
    {
        if(substr[substr_index] == main_string[i])
        {
            count++;
            substr_index++;
            if(count == substr.length())
                flag = 1;
        }
        else
            if(substr[0] == main_string[i])  // "tesst" , "st" case will fail if this condition is not there.
            {
                count=1;
                substr_index=1;
            }
            else
            {
                count=0;
                substr_index=0;
            }
    }
    if(flag)
        return 1;
    else
        return 0;
}

void string_reverse(string String1, string String2)
{
    string dissect = "";
    string reversed_string = "";
    string remaining_reversed_string = "";
    
    bool flag = 0;
    
    for(int i = 0; i <= String1.length(); i++)
    {
        if(String1[i]!=' ' and String1[i]!='\0')
        {
            dissect = dissect + String1[i];
        }
        else
        {
            if(flag == 0)
                flag = issubstr(dissect, String2);
            if(flag)
            {
                remaining_reversed_string = dissect + " " + remaining_reversed_string;
            }
            else
            {
                reversed_string = reversed_string + dissect + " ";
            }
            dissect = "";
        }
    }   
    reversed_string= reversed_string + remaining_reversed_string;
    cout<<reversed_string;
}

int main() 
{
    string_reverse("This is a tesst String only", "st");

    return 0;
}
