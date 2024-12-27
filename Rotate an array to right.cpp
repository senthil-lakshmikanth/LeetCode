// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int array[6];
    int rotate;
    cout<<"Enter 6 elements with space seperated : ";

    for(int i=0; i<6; i++)
        cin >> array[i];
        
    cout<<"Enter rotate : ";
    cin>>rotate;
    
    int array_size=sizeof(array)/sizeof(array[0]); //total bytes of array here int=4 bytes * 6 elements = 24 bytes / 4 bytes = 6.
    
    for(int i=0; i<rotate; i++)
    {
        int temp=array[0];
        for(int j=0; j<array_size-1; j++)
        {
            array[j]=array[j+1];
        }
        array[array_size-1]=temp;
    }
    
    for(int i=0; i<array_size; i++)
        cout<<array[i]<<" ";
    
    
    return 0;
}
