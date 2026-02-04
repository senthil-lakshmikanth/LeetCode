// Given two strings, the task is to find if a string can be obtained by rotating 
// another string can be obtained by rotating another string by n places.3 
// Examples: 

// Input: 
// String1 = "amazon" String2="azonam" rotateCount=2
// Output: 
// Yes 
// Explanation : 
// Rotating string1 by 2 places in clockwise given the string2 

// Input: 
// String1 = "amazon" String2="onamaz" rotateCount=2
// Output: 
// Yes 
// Explanation : 
// Rotating string1 by 2 places in anti-clockwise given the string2 

// String1 = "amazon" String2="zonama" rotateCount=3        
// Output: 
// Yes 
// Explanation :  
// Rotating string1 by 3 places in anti-clockwise given the string2 

#include <iostream>

using namespace std;

bool clock(string s1, string compare, int rotateCount)
{
    bool flag = 1;

    string combine = s1 + s1;

    int start = 0 + rotateCount; // Only first 2(rotate_count) letters are omitted and rest 4 letters are considered.
    int end = s1.size() + rotateCount; // Those 2 omitted letters are added

    // cout<<" \n clock wise rotate : \n";
    for(int i = start; i < end; i++)
    {
        // cout << combine[i] << " - " << compare[i - rotateCount] << "\n";

        if(combine[i] != compare[i - rotateCount])
        {
            flag = 0;
            break;
        }
    }    

    return flag;
}

bool anti_clock(string s1, string compare, int rotateCount)
{
    bool flag = 1;
    
    string combine = s1 + s1;

    int start = s1.size() - rotateCount; // First 4 letters are omitted and only last 2(rotate_count) letters are considered
    int end = s1.size() + start; // (s1.size() - rotateCount) // Those 4 omitted letters are added. 

    // cout<<" \n anti-clock wise rotate : \n";
    for(int i = start; i < end; i++) // amazon-amazon : onamaz
    {
        // cout << combine[i] << " - " << compare[i - (s1.size() - rotateCount)] << "\n";

        if(combine[i] != compare[i - (s1.size() - rotateCount)])
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    string s1 = "amazon";
    string s2 = "azonam";
    int rotateCount = 2 % s1.size();

    if(clock(s1, s2, rotateCount) || anti_clock(s1, s2, rotateCount))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
