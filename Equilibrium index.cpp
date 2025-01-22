// Online C++ compiler to run C++ program online

// Equilibrium index of an array is an index such that the sum of elements at
// lower indexes is equal to the
// sum of elements at higher indexes. For example, in an array A:
// Example :
// Input: A[] = {-7, 1, 5, 2, -4, 3, 0}
// Output: 3
// 3 is an equilibrium index, because:
// A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
// Input: A[] = {1, 2, 3}
// Output: -1

#include <iostream>

using namespace std;

int main() 
{
    int A[]={-7, 1, 5, 2, -4, 3, 0};
    // int A[]={1, 2, 0, 3};
    // int A[] = {1, 3, 5, 2, 2};
    // int A[] = {1, 3, 2, 4};
    
                            //Failing Test cases
    // int A[] = {1, 2, 3}; 
    // int A[] = {1,1,1,1};

    
    int size = sizeof(A) / sizeof(A[0]);
    
    int total_sum=0;
    for(int i=0; i<size; i++)
        total_sum += A[i];
        
    int left_sum=0, right_sum;
    
    bool flag=1;
    
    for(int i=0; i<size; i++)
    {
        left_sum += A[i];
        right_sum = total_sum - left_sum; 
        
        if(left_sum - A[i] == right_sum) // We subtract the current element from left sum, because we do not include element of Equilibrium index in both sides. left sum < Equilibrium index > right sum.
        {
            flag=0;
            cout<<"Element : "<<A[i]<<" @ Equilibrium index : "<<i<<endl;
            cout<<"Left sum = "<<left_sum - A[i]<<endl;
            cout<<"Right sum = "<<right_sum;
            break;
        }
    }
    
    if(flag)
        cout<<"-1"<<endl<<" No Equilibrium index for this array !";
        
    return 0;
}
