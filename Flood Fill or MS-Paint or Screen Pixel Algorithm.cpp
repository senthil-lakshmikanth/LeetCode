// Online C++ compiler to run C++ program online

// In MS-Paint, when we take the brush to a pixel and click, the color of the
// region of that pixel is replaced with a new selected color. Following is the
// problem statement to do this task.
// Given a 2D screen, locaon of a pixel in the screen and a color, replace color of
// the given pixel and all adjacent same colored pixels with the given color.
// Example:
// Input:
// screen[M][N] = { {1, 1, 1, 1, 1, 1, 1, 1},
// {1, 1, 1, 1, 1, 1, 0, 0},
// {1, 0, 0, 1, 1, 0, 1, 1},
// {1, 2, 2, 2, 2, 0, 1, 0},
// {1, 1, 1, 2, 2, 0, 1, 0},
// {1, 1, 1, 2, 2, 2, 2, 0},
// {1, 1, 1, 1, 1, 2, 1, 1},
// {1, 1, 1, 1, 1, 2, 2, 1},
// };
// x = 4, y = 4, newColor = 3
// The values in the given 2D screen indicate colors of the pixels.
// x and y are coordinates of the brush, newColor is the color that
// should replace the previous color on screen[x][y] and all surrounding
// pixels with same color.
// Output:
// Screen should be changed to following.
// screen[M][N] = { {1, 1, 1, 1, 1, 1, 1, 1},
// {1, 1, 1, 1, 1, 1, 0, 0},
// {1, 0, 0, 1, 1, 0, 1, 1},
// {1, 3, 3, 3, 3, 0, 1, 0},
// {1, 1, 1, 3, 3, 0, 1, 0},
// {1, 1, 1, 3, 3, 3, 3, 0},
// {1, 1, 1, 1, 1, 3, 1, 1},
// {1, 1, 1, 1, 1, 3, 3, 1},
// }; 

// Example: 

// Input: img[][] =
//  { {1, 1, 1}, 
//  {1, 1, 0}, 
//  {1, 0, 1} }
// x = 1, y = 1, newClr = 3
// Output:  img[][] =
// {{3, 3, 3},
//  {3, 3, 0}, 
//  {3, 0, 1}}
// Explanation: The value at arr[1][1] is 1. All connected pixels with the color 1 are replaced with 3


// Input: img[][] = 
// { {0, 0, 0}, 
//  {0, 1, 1} }
// x = 1, y = 1, newClr = 1
// Output:  img[][] =
// {{0, 0, 0},
//  {0, 1 , 1}}
// Explanation: Old and new colors are same, so no change


// Input:: arr[][] = 
// { {2, 2, 2}, 
//  {2, 2, 2}, }
// x = 0, y = 0, newClr = 1
// Output:   img[][] =
// {{1, 1, 1},
//  {1, 1, 1}}}


#include <iostream>

using namespace std;

void Flood_Fill(int screen[2][3], int oldColor, int newColor, int x, int y)
{

        if (screen[x][y] == oldColor) 
            screen[x][y] = newColor;
        else 
            return; // Quit the particular recursive call.
            
        // Recurse for adjacent cells
        Flood_Fill(screen, oldColor, newColor, x - 1, y); // Up
        Flood_Fill(screen, oldColor, newColor, x + 1, y); // Down
        Flood_Fill(screen, oldColor, newColor, x, y - 1); // Left
        Flood_Fill(screen, oldColor, newColor, x, y + 1); // Right

}

int main() 
{
    int M=2, N=3;
    int screen[2][3] = { 
        
        // {0, 0, 0}, 
        // {0, 1, 1},
        
        {2, 2, 2}, 
        {2, 2, 2},
        
        // {1, 1, 1}, 
        // {1, 1, 0}, 
        // {1, 0, 1},

        
        // {1, 1, 1, 1, 1, 1, 1, 1},
        // {1, 1, 1, 1, 1, 1, 0, 0},
        // {1, 0, 0, 1, 1, 0, 1, 1},
        // {1, 2, 2, 2, 2, 0, 1, 0},
        // {1, 1, 1, 2, 2, 0, 1, 0},
        // {1, 1, 1, 2, 2, 2, 2, 0},
        // {1, 1, 1, 1, 1, 2, 1, 1},
        // {1, 1, 1, 1, 1, 2, 2, 1},
        
    }; 

    int x = 0, y = 0, newColor = 1;
    int oldColor=screen[x][y];
    
    if(oldColor!=newColor)
        Flood_Fill(screen,oldColor,newColor,x,y);
    
    for(int i=0; i<M; i++) // Print the updated screen.
    {
        for(int j=0; j<N; j++)
            cout<<screen[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
