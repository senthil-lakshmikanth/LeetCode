// Online C++ compiler to run C++ program online

// Given a matrix of 2D array of n rows and m columns. Print this matrix in
// ZIG-ZAG fashion as shown
// in gure.
// Example:
// Input:
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
// 1 2 4 7 5 3 6 8 9

#include <iostream>

using namespace std;

int main() 
{
    int M=4, N=4;
    int matrix[M][N]={
        {1,   2,  3,  4},
        {5,   6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16},
    };

    int last_index=(M-1)+(N-1); // 2x2 = 2 , 3x3 = 4, 4x4 = 6, 5x5 = 8
    
    int zig_zag=0; 
    
    while(zig_zag<=last_index)
    {
        if(zig_zag%2==1)
        {
            for(int i=0; i<M; i++)
                for(int j=0; j<N; j++)
                    if(i+j==zig_zag)
                        cout<<matrix[i][j]<< " ";
        }
        else
        {
            for(int i=M-1; i>=0; i--)
                for(int j=N-1; j>=0; j--)
                    if(i+j==zig_zag)
                        cout<<matrix[i][j]<< " ";
        }
        zig_zag++;
    }
    return 0;
}
