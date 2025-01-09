// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main()
{
    int array[9]={7,6,10,5,9,2,1,15,7};
    
    int n=sizeof(array)/sizeof(array[0]);
    
    int key = 2;
    int flag=1;
    
    for(int i=0; i<n; i++)
        if(array[i]==key)
        {
            cout<<i<<" <-- index";
            flag=0;
        }
    
    if(flag==1)
        cout<<"Element not in the array";
    
    return 0;
}

