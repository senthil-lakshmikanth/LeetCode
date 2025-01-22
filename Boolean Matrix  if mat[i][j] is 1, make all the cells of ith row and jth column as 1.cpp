// Online C++ compiler to run C++ program online

// Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

#include <iostream>

using namespace std;

int main() 
{

    int M=3, N=4;
    bool mat[3][4] = {
        {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0},
    };
    
    bool row[M]={0};
    bool col[N]={0};
    
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(mat[i][j]==1)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(row[i]==1 || col[j]==1)
                mat[i][j]=1;
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
