// Online C++ compiler to run C++ program online

// QuickSort works on the principle of Divide and Conquer, breaking down the problem into smaller sub-problems.

// Choose a Pivot: Select an element from the array as the pivot. The choice of pivot can vary (e.g., first element, last element, random element, or median).
// Partition the Array: Rearrange the array around the pivot. After partitioning, all elements smaller than the pivot will be on its left, and all elements greater than the pivot will be on its right. The pivot is then in its correct position, and we obtain the index of the pivot.
// Recursively Call: Recursively apply the same process to the two partitioned sub-arrays (left and right of the pivot).
// Base Case: The recursion stops when there is only one element left in the sub-array, as a single element is already sorted.

#include <iostream>

using namespace std;

int partition(int a[], int lower_bound, int upper_bound)
{
    int pivot = a[lower_bound];
    int start = lower_bound;
    int end = upper_bound;
    
    while(start<end)
    {
        while(a[start]<=pivot)
            start++;
        while(a[end]>pivot)
            end--;
        if(start<end)
            swap(a[start],a[end]);
    }
    swap(a[lower_bound],a[end]);
    return end; // is the index of pivot element, in the middle.
}

int QuickSort(int array[], int lower_bound, int upper_bound) 
{
    if(lower_bound<upper_bound)
    {
        int pivot_location=partition(array, lower_bound, upper_bound);
        QuickSort(array, lower_bound, pivot_location-1);
        QuickSort(array, pivot_location+1, upper_bound);
    }
    
    return 0;
}

int main()
{
    int array[9]={7,6,10,5,9,2,1,15,7};
    int n=sizeof(array)/sizeof(array[0]);
    QuickSort(array, 0, n-1);
    
    for(int i=0; i<n; i++)
        cout<<array[i]<<" ";
    return 0;
}

