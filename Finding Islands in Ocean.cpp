// Online C++ compiler to run C++ program online

// -1 represents ocean and 1 represents land nd the number of islands in the
// given matrix.
// Input: n*n matrix
// 1 -1 -1 1
// -1 1 -1 1
// -1 -1 1 -1
// -1 -1 -1 1
// Output: 2 (two islands that I have
// bold in matrix at 1, 1 and 2, 2) 

#include <iostream>

using namespace std;

int total_island_count = 0;

void to_find_island(int ocean[][4], int i, int j, int N)
{
    if(i-1 >= 0 and j-1 >= 0 and i+1 < N and j+1 < N)
    {
        if(ocean[i-1][j] == -1 and ocean[i+1][j] == -1 and ocean[i][j-1] == -1 and ocean[i][j+1] == -1 )
        {
            cout<<"Island : "<<i<<","<<j<<endl;
            total_island_count++;
        }
    }
}

int main() 
{
    int N = 4;
    int ocean[4][4] = {
        {1, -1, -1, 1},
        {-1, 1, -1, 1},
        {-1, -1, 1, -1},
        {-1, -1, -1, 1},
    };
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(ocean[i][j] == 1)
            {
                to_find_island(ocean, i, j, N);
            }
        }
    }
    
    cout<<"Total Islands : "<<total_island_count;
    
    return 0;
}
