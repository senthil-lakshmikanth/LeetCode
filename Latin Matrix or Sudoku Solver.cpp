// Online C++ compiler to run C++ program online

// Given N. print the Lan Matrix (say N = 3). condion: must not use
// strings(aka character literals), arrays (both 1D and 2D), inbuilt funcons(like
// rotate).
// A B C
// B C A
// C A B 

#include <iostream>

using namespace std;

enum MatrixType 
{
    LatinMatrix,
    SudokuMatrix
};


void Generate_Matrix(int N, MatrixType mt)
{
    int sum;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(i+j < N) // if i+j greater than Diagonal index
                sum = i+j; // Triangle above the Diagonal
            else
                sum=abs( N - (i+j) ); // Triangle below the Diagonal if(i+j>N)
            
            if(mt == LatinMatrix)
                cout<<char(65+sum)<<" "; // Latin Matrix
            else
                cout<<sum+1<<" "; // Sudoku
        }
        cout<<endl;
    }
    cout<<"-------------------"<<endl;
}

void Latin_Matrix(int N)
{   
    Generate_Matrix(N, LatinMatrix);
}

void Sudoku(int N)
{
    Generate_Matrix(N, SudokuMatrix);
}

int main() 
{
    
    Latin_Matrix(3);
    Sudoku(4);
    
    return 0;
}
