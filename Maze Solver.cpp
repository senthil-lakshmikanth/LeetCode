// Online C++ compiler to run C++ program online

// Given a matrix NxN, you are inially in the 0, 0 posion. The matrix is lled
// with ones and zeros. Value “one” represents the path is available, while “zero”
// represents the wall. You need to nd the can you able to reach the (N-1)x(N-1)
// index in the matrix. You can move only along the right and down direcons if
// there’s “one” available.
// • Input:
// • 5 //N value
// • 1 0 1 0 0
// • 1 1 1 1 1
// • 0 0 0 1 0
// • 1 0 1 1 1
// • 0 1 1 0 1
// • Output:
// Yes 

#include <iostream>

using namespace std;

int maze_run(int maze[5][5], int i, int j)
{
    if(i == 4 and j == 4) // (N-1)x(N-1) - Last element of the maze
        return true;
    if(maze[i][j]==0 or i >= 5 or j >= 5)
        return false;
        
    if(maze_run(maze, i+1, j)) // the return true/false from above if-s will come here. (but for one element that is 1, it should return 1)
        return 1;
    if(maze_run(maze, i, j+1))
        return 1;
    return 0;
}

int main() 
{
    int maze[5][5]= { 
        {1, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 1, 0},  // make the 1 in this to 0 to create a wall across.
        {1, 0, 1, 1, 1},
        {0, 1, 1, 0, 1},
    };
    
    int flag = maze_run(maze, 0, 0);
    
    if(flag==1)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
