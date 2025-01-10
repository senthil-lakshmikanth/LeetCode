// Online C++ compiler to run C++ program online

// Write a program in Java to print the elements of the matrix in Wave Order
// as shown below. (The matrix can have dierent numbers of rows and columns).
// Input:
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
// 1 4 7
// 8 5 2
// 3 6 9

#include <iostream>

using namespace std;

int main() 
{

    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i=0; i<3; i++)
    {
        if(i%2==0)
            for(int j=0; j<3; j++)
                cout<<array[j][i]<<" ";
        else
            for(int j=2; j>=0; j--)
                cout<<array[j][i]<<" ";
        cout<<endl;
    }
    return 0;
}
