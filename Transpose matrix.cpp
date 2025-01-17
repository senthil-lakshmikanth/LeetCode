// Online C++ compiler to run C++ program online

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int matrix[4][3]={
        {2, -9, 3 },
        {13, 11, -17 },
        {3, 6, 15 },
        {4, 13, 1}
    };
    
    cout<<"Transpose of matrix : "<<endl;
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
