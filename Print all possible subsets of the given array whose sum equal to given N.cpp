// Online C++ compiler to run C++ program online

// Print all possible subsets of the given array whose sum equal to given N.
// example: Input: {1, 2, 3, 4, 5} N=6 Output: {1, 2, 3}, {1, 5}, {2, 4} 

#include <iostream>

using namespace std;

void print_subset(int array[], int index, int size, int subset[], int subset_size, int N)
{
    if( index >= size )
    {
        int sum = 0;
        
        for(int i = 0; i < subset_size; i++)
        {
            sum = sum + subset[i];
        }
        if(N == sum)
        {
            cout<<"{";
            for(int i = 0; i < subset_size; i++)
            {
                cout<<subset[i];
                if (i == subset_size-1) 
                    cout<<"";
                else
                    cout<<", ";
            }
            cout<<"}"<<endl;
        }
        return;
    }
    
    subset[subset_size] = array[index];
    
    print_subset(array, index+1, size, subset, subset_size+1, N);
    print_subset(array, index+1, size, subset, subset_size, N);
}

int main() 
{
    int array[] = {1, 2, 3, 4, 5}; int N = 6;
    int array_size = sizeof(array) / sizeof(array[0]);
    
    int subset[array_size];
    
    print_subset(array, 0, array_size, subset, 0, N);
    
    return 0;
}
