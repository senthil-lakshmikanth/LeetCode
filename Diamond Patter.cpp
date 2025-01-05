// Online C++ compiler to run C++ program online
      A 
     A B 
    A B C 
   A B C D 
  A B C D E 
 A B C D E F 
A B C D E F G 
 A B C D E F 
  A B C D E 
   A B C D 
    A B C 
     A B 
      A 
      
#include <iostream> 

using namespace std;

int main() {

    int n=8;
    for(int i=1; i<2*n; i++)  // Most Efficient code of all above.
    {
        for(int space=1; space<= ((i<8) ? n-i-1 : i-n+1); space++)
                    cout<<" ";
        for(int j=1; j< ((i<8) ? i+1 : (2*n)-i-1); j++)
                cout<<char(j+64)<<" ";
        
        cout<<endl;
    }
    return 0;
}
