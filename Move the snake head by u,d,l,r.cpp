// Online C++ compiler to run C++ program online

// Assume there exists innite grid, you’re given inial posion x, y. Inputs will
// be movements either L or R or U or D. Aer n inputs, you need to give the
// current posion.
// • Input:
// • 4 5 //inial posion x, y
// • 7 //number of movements
// • U L R R D D U L R //7 movements
// • Output:
// 4 6

#include <iostream>

using namespace std;

int main() 
{
    int x, y;
    cout<<"Enter Initial positions : ";
    cin>>x>>y;
    
    int movements;
    cout<<"Enter Number of movements : ";
    cin>>movements;
    
    int l=0, r=0, u=0, d=0;
    cout<<"Enter moves \"U, D, L, R\" : "; 
    while(movements>0)
    {
        char move;
        cin>>move;
        
        if(move == 'U' || move == 'u')
            u++;
        if(move == 'D' || move == 'd')
            d++;
        if(move == 'L' || move == 'l')
            l++;
        if(move == 'R' || move == 'r')
            r++;
        movements--;
    }
    
    x -= u - d;
    y += r - l;
    cout<<x<<" "<<y;

    return 0;
}
