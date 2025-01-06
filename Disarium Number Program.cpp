// Online C++ compiler to run C++ program online
// Write a Java program which checks whether given number is Disarium number
// or not. A number is said to be Disarium if it is equal to sum of its digits raised to
// the power of their respective position in the number.
// 135 is a Disarium number. Because, it is equal to sum of its digits raised to the
// power of their respective position.
// 135 = 1^1 + 3^2 + 5^3
// 135 = 1 + 9 + 125
// 135 = 135

#include <iostream>
#include <cmath>

using namespace std;
int main() 
{
    int n;
    cout<<"Enter a number to check Disarium : ";
    cin>>n;
    
    int temp=n;
    int digit;
    int count=0;
    int sum=0;
    
    while(temp!=0)
    {
        digit=temp%10;
        count++;
        temp=temp/10;
    }
    
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        digit=pow(digit,count);
        sum+=digit;
        count--;
        temp=temp/10;
    }
    if(sum==n)
        cout<<n<<" is a Disarium number";
    else
        cout<<n<<" is not a Disarium number";
    return 0;
}
