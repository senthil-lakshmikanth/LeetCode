// Online C++ compiler to run C++ program onlin

// Sample Input – Alternate Sorting
// Input: {1, 2, 3, 4, 5, 6, 7}
// output: {7, 1, 6, 2, 5, 3, 4}

#include <iostream>

using namespace std;

void bubble_sort(int A[], int size)
{
    for(int i=size-1; i>=0; i--)
        for(int j=0; j<i; j++) 
            if(A[j]>A[j+1])
                swap(A[j],A[j+1]);
}


void alternate_sort(int A[], int size, int B[])
{
    bubble_sort(A, size);
    
    int left_index = 0, right_index = size-1;
    int array_index = 0;
    
    while(left_index <= right_index)
    {
        B[array_index++]=A[right_index--];
        B[array_index++]=A[left_index++];
    }
    
    cout<<"Alternate Sort : ";
    for(int i=0; i<size; i++)
        cout<<B[i]<<" ";
    cout<<endl;
}

int main() 
{
    int A[] = {1, 6, 9, 4, 3, 7, 8, 2};
    // int A[] = {1, 2, 3, 4, 5, 6, 7};
    
    int size = sizeof(A) / sizeof(A[0]);
    
    cout<<"Original Array : ";
    for(int i=0; i<size; i++)
        cout<<A[i]<<" ";
    cout<<endl;
    
    int B[size];
    
    alternate_sort(A, size, B);
    
    return 0;
}
