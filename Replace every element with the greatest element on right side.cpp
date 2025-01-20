// Online C++ compiler to run C++ program online

// Replace every element with the greatest element on right side
// Last Updated: 06-05-2019
// Given an array of integers, replace every element with the next greatest
// element (greatest element on the
// right side) in the array. Since there is no element next to the last element,
// replace it with -1. For example,
// if the array is {16, 17, 4, 3, 5, 2}, then it should be modied to {17, 5, 5, 5, 2, -1}. 

#include <iostream>

using namespace std;

void chatGPT_Logic(int array[], int N)
{
    int max_right = -1;
    
    for(int i=N-1; i>=0; i--)
    {
        int current_element = array[i];
        
        array[i] = max_right;
        
        if(current_element > max_right)
            max_right = current_element;

    }
    
    for(int i=0; i<N; i++)
        cout<<array[i]<<" ";
    cout<<endl<<"----------------"<<endl;
}

void Senthil_Logic(int array[], int N)
{
    for(int i=0; i<N; i++)
    {
        int greatest = array[i+1];
        for(int j=i+1; j<N; j++)
        {
            if(array[j] > greatest)
                greatest = array[j];
            array[i]=greatest;
        }
        if(i==N-1)
            array[N-1]=-1;
    }
    
    for(int i=0; i<N; i++)
        cout<<array[i]<<" ";
    cout<<endl<<"----------------"<<endl;
}

int main() 
{
    int N=6;
    int array[N] = {16, 17, 4, 3, 5, 2};
    
    // Senthil_Logic(array, N);
    chatGPT_Logic(array, N);
    
    return 0;
}
