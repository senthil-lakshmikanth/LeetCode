// Online C++ compiler to run C++ program online

//  Given a 6 blocks, of dierent height h1, …, h6 . Make 2 towers using 3
// Blocks for each tower in desired height h1, h2. Print the blocks to be used in
// ascending order
// Input:
// 1 2 5 4 3 6
// height of tower: 6 15
// Output :
// 1 2 3 & 4 5 6 

#include <iostream>
#include <algorithm> // For std::sort

using namespace std;

int main() 
{
    int N = 6;
    int H1 = 7, H2 = 14;
    
    int blocks[N] = {2, 4, 6, 3, 5, 1};
    int tower1[N/2] = {0};
    int tower2[N/2] = {0};
    
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            for(int k=j+1; k<6; k++)
            {
                if(blocks[i]+blocks[j]+blocks[k] == H1 and blocks[i]!=-1 and blocks[j]!=-1 and blocks[k]!=-1)
                {
                    tower1[0]=blocks[i];
                    tower1[1]=blocks[j];
                    tower1[2]=blocks[k];
                    blocks[i]=blocks[j]=blocks[k]=-1;
                }
            
                if(blocks[i]+blocks[j]+blocks[k] == H2 and blocks[i]!=blocks[j]!=blocks[k]!=-1)
                {
                    tower2[0]=blocks[i];
                    tower2[1]=blocks[j];
                    tower2[2]=blocks[k];
                    
                    blocks[i]=blocks[j]=blocks[k]=-1;
                }
            }
        }
    }
    
    sort(tower1, tower1 + N/2);
    sort(tower2, tower2 + N/2);
    
    if(tower1[0] <= 0 or tower2[0] <= 0)
        cout<<"Invalid blocks";
    else
    {
        cout<<"Blocks used in Tower 1 : ";
        for(int i=0; i<3; i++)
            cout<<tower1[i]<<" ";
        cout<<endl;
        cout<<"Blocks used in Tower 2 : ";
        for(int i=0; i<3; i++)
            cout<<tower2[i]<<" ";
    }
    
    return 0;
}
