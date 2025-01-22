// Online C++ compiler to run C++ program online

// Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make its adjacent cells as 0

#include <iostream>

using namespace std;

int main() 
{

    int M=3, N=4;
    bool mat[3][4] = {
        {1, 0, 0, 1},
        {0, 1, 1, 0},
        {0, 0, 0, 0},
    };
    
    bool array[M][N];
    
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(mat[i][j]==1)
                array[i][j]=1;  
            else
                array[i][j]=0;  
        }
    }
    
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(array[i][j]==1)
            {
                mat[i-1][j]=0; // Above Element
                mat[i][j-1]=0; // Left Element
                mat[i][j+1]=0; // Down Element
                mat[i+1][j]=0; // Right Element
            }
        }
    }
    
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
