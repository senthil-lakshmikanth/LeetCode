// Online C++ compiler to run C++ program online

#include <iostream>

using namespace std;

void print_subset(int index, int size, int subset[], int subset_size)
{
    if( index > size )
    {
        cout<<"{ ";
        for(int i = 0; i < subset_size; i++)
            cout<<subset[i]<<" ";
        cout<<"}"<<endl;
        return;
    }
    subset[subset_size] = index;
    
    print_subset(index+1, size, subset, subset_size+1);
    print_subset(index+1, size, subset, subset_size);
}

int main() 
{
    
    int array_size = 3;
    
    int subset[array_size];
    
    print_subset(1, array_size, subset, 0);
    
    return 0;
}
