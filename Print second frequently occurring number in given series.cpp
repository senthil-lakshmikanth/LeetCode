// Online C++ compiler to run C++ program online

// Print second frequently occurring number in given series
// Example :
// Input: 1 1 2 3 1 2 4
// Output: 2
// Explanaon: 1 occurs 3 times, 2 occurs 2 times, 3 occurs 1 time and 4 occurs 1
// time. Hence second frequently occurring number in given series is 2 

#include <iostream>

using namespace std;

int main() 
{
    int array[7] ={1, 1, 2, 3, 1, 2, 4};
    
    int max_count=0, second_max_count;
    
    for(int i=0; i<7; i++)
    {
        int count=1;
        for(int j=i+1; j<7; j++)
        {
            if(array[i]==array[j] and array[j]!=-1)
            {
                count++;
                array[j]=-1;
            }
        }
        if(count>max_count)
        {
            second_max_count=max_count;
            max_count=count;
        }
        if(count<max_count and count > second_max_count)
        {
            second_max_count=count;
        }
    }
    
    cout<<second_max_count;
    return 0;
}
