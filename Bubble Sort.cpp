// Online C++ compiler to run C++ program online

// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity are quite high.

// We sort the array using multiple passes. After the first pass, the maximum element goes to end (its correct position). Same way, after second pass, the second largest element goes to second last position and so on.
// In every pass, we process only those elements that have already not moved to correct position. After k passes, the largest k elements must have been moved to the last k positions.
// In a pass, we consider remaining elements and compare all adjacent and swap if larger element is before a smaller element. If we keep doing this, we get the largest (among the remaining elements) at its correct position.


#include <iostream>

using namespace std;

int main() 
{
    int array[5]={64,25,12,22,11};
    
    int n=sizeof(array)/sizeof(array[0]);
    
    for(int i=n-1; i>=0; i--) // for(int i=0; i<n-1); i++)
        for(int j=0; j<i; j++) // for(int j=0; j<n-i-1; j++)
            if(array[j]>array[j+1])
                swap(array[j],array[j+1]);
        
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}
