// Online C++ compiler to run C++ program online
// Saddle point of a matrix is an element in the matrix which is smallest in its row and largest in its column. For example,
// 6 3 1
// 9 7 8
// 2 4 5
// In this matrix, 7 is the saddle point. Because it is the smallest in its row (2ndrow) and largest in its column (2ndcolumn). 

#include <iostream>

using namespace std;

int main() 
{
    int size=3;
    // cout<<"Enter size of the matrix : ";
    // cin>>size;
    
    int array[size][size]={
        
    {1,2,3},
    {4,5,6},
    {7,8,9},
    
    };
    
    for(int i=0; i<size; i++) // Print the matrix
    {
        for(int j=0; j<size; j++)
        {
            // cout<<"Enter"<<i"th row "<<j<<"th element : ";
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int flag=0;
    int row_min, col_max;
    int row_index, col_index;
    for(int i=0; i<size; i++)
    {
        row_min=array[i][0];
        col_index=0;
        for(int j=0; j<size; j++)
        {
            if(array[i][j]<row_min)
            {
                row_min=array[i][j];
                col_index=j;
            }
            
        }
        col_max=array[0][col_index];
        row_index=0;
        for(int row=0; row<size; row++)
        {
            
            if(array[row][col_index]>col_max)
            {
                col_max=array[row][col_index];
                row_index=row;
            }
            
        }

        if(row_min==col_max)
        {
            cout<<"Saddle point in the matrix --> "<<array[row_index][col_index]<<" at ["<<row_index<<"]["<<col_index<<"] index";
            flag=1;
        }
    }
    
    if(flag==0)
        cout<<"There is no Saddle point in the given matrix.";
    
    return 0;
}
