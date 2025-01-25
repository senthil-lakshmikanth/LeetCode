// Online C++ compiler to run C++ program online

// Given N. print the following snake paern (say N = 4). condion: must not
// use arrays ( 1D array or 2D
// array like Matrix ).
// 1 2 3 4
// 8 7 6 5
// 9 10 11 12
// 16 15 14 13

#include <iostream>

using namespace std;

void print_anti_clock(int end, int start, int N);

void print_clock(int start, int end, int N)
{
    if(start > N*N)
        return;
    
    for(int i=start; i<=end; i++)
        cout<<i<<" ";
    cout<<endl;
    
    print_anti_clock(end+N, end+1, N);
}

void print_anti_clock(int end, int start, int N)
{
    if(end > N*N)
        return;
        
    for(int i=end; i>=start ; i--)
        cout<<i<<" ";
    cout<<endl;
    
    print_clock(end+1, end+N, N);
}

int main() 
{
    int N = 4;
    
    print_clock(1, N, N);

    return 0;
}
