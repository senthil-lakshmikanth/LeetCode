// Online C++ compiler to run C++ program online

// det(A) = a1(b2c3 - b3c2) - b1(a2c3 - a3c2) + c1(a2b3 - a3b2)

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int matrix[3][3]={
        {1, -2, 3 },
        {2, 0, 3 },
        {1, 5, 4 }
    };
    
    int cofactor[4];
    
    int row=0;
    
while(row!=3)
{
    int sum=0;
    int prod=1;


    for(int col=0; col<3; col++)
    {
        int index=0;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(i!=row and j!=col)
                {
                    cofactor[index++]=matrix[i][j];
                }
            }
        }
        prod=matrix[row][col]*((cofactor[0]*cofactor[3])-(cofactor[1]*cofactor[2]));
        
        (col%2==0) ? sum+=prod : sum-=prod; // det(A) = a1(b2c3 - b3c2) - b1(a2c3 - a3c2) + c1(a2b3 - a3b2)

        // second it is minus.
    }
    
    cout<<"The determinant is "<<sum<<" when expanding along the "<<row<<" th row"<<endl;
    row++;
}
    return 0;
}
