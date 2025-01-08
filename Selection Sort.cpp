// Online C++ compiler to run C++ program online

// First we find the smallest element and swap it with the first element. This way we get the smallest element at its correct position.
// Then we find the smallest among remaining elements (or second smallest) and swap it with the second element.
// We keep doing this until we get all elements moved to correct position.


#include <iostream>

using namespace std;

int main() 
{
    int array[5]={64,25,12,22,11};
    
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++)
    {
        int smallest=i;
        for(int j=i+1; j<sizeof(array)/sizeof(array[0]); j++)
            if(array[j]<array[smallest])
                smallest=j; // store the index of smallest element.
        swap(array[i], array[smallest]);
    }
        
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}
