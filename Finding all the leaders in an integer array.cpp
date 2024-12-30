// Online C++ compiler to run C++ program online
// How to find all the leaders in an integer array in Java?
// Write a Java program to find all the leaders in an integer array. An element is
// said to be a leader if all the elements on it’s right side are smaller than it.
// Rightmost element is always a leader. For example, if {14, 9, 11, 7, 8, 5, 3} is
// the given array then {14, 11, 8, 5, 3} are the leaders in this array.
// Output :
// The leaders in [12, 9, 7, 14, 8, 6, 3] are :
// 3 6 8 14
// The leaders in [8, 23, 19, 21, 15, 6, 11] are :
// 11 15 21 23
// The leaders in [55, 67, 71, 57, 51, 63, 38] are :
// 38 63 71
// The leaders in [21, 58, 44, 14, 51, 36, 23] are :
// 23 36 51 58 

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int array[7];
    int n=7; // length of the array.

    cout<<"Enter 7 elements seperated by whitespace : ";
    for(int i=0; i<7; i++)
        cin>>array[i];
    
    int max_right_element=array[n-1]; 
    cout<<max_right_element; //last element will always be a leader.
    
    for(int i=n-2; i>=0; i--)
    {
        if(array[i]>max_right_element)
        {
            max_right_element=array[i];
            cout<<" "<<array[i];
        }
    }

    return 0;
}
