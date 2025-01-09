// Online C++ compiler to run C++ program online

// Conditions to apply Binary Search Algorithm in a Data Structure : 
// The data structure must be sorted. <--------------------- 
// Access to any element of the data structure should take constant time

// Divide the search space into two halves by finding the middle index “mid”. 
// Compare the middle element of the search space with the key. 
// If the key is found at middle element, the process is terminated.
// If the key is not found at middle element, choose which half will be used as the next search space.
// If the key is smaller than the middle element, then the left side is used for next search.
// If the key is larger than the middle element, then the right side is used for next search.
// This process is continued until the key is found or the total search space is exhausted.


#include <iostream>

using namespace std;

int BinarySearch(int a[], int key, int start, int end)
{
    if (start > end)
        return -1;

    int median = start + (end-start)/2;
    if(key==a[median])
        return median;
    if(key>a[median])
        return BinarySearch(a, key, median+1, end);
    return BinarySearch(a, key, start, median-1); // if(key<a[median]) <-- This happens implicitly !
}

int main()
{
    int array[9]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(array)/sizeof(array[0]);
    int key=2;
    int index=BinarySearch(array,key,0,n-1);
    if(index!=-1)
        cout<<"The element is found in "<<index<<" <-- index of a sorted array";
    else
        cout<<"Element not found in the sorted array";
    return 0;
}

