// Online C++ compiler to run C++ program online
// Write a Java program to check whether the given number is pronic or not.
// Pronic number is a number which is the product of two consecutive integers i.e
// n(n+1).
// Pronic Number Examples :
// Below are some examples of Pronic number. 
// 2 = 1 x 2
// 6 = 2 x 3
// 12 = 3 x 4
// 20 = 4 x 5
// 30 = 5 x 6
// 42 = 6 x 7
// 56 = 7 x 8
// 72 = 8 x 9
// 90 = 9 x 10
// Output 1 :
// Enter a number :
// 342
// 342 is a pronic number
// 18 x 19 = 342
// Output 2 :
// Enter a number :
// 1406
// 1406 is a pronic number
// 37 x 38 = 1406
// Output 3 :
// Enter a number :
// 979
// 979 is not a pronic number

#include <iostream>
#include <cmath>

using namespace std;
int main() 
{
    int n;
    cout<<"Enter a number to check Pronic : ";
    cin>>n;
    
    if(int(sqrt(n))*int(sqrt(n)+1) == n)
        cout<<int(sqrt(n))<<" x "<<int(sqrt(n)+1)<<" = "<<n;
    else
        cout<<n<<" is not a Pronic number";

    return 0;
}
