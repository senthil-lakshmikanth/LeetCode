// Online C++ compiler to run C++ program online
// Harshad number or Niven number is a number which is divisible by the sum of
// its digits. For example, 21 is a Harshad number because 21 is divisible by the
// sum of its digits (2+1=3). An interviewer ask this type of logical programs in
// interview to test how do you implement logic in your code.
// What Is Harshad Number Or Niven Number?
// Harshad number or Niven number is a number which is divisible by the sum of
// its digits.
// For example,
// 21 is a Harshad number because it is divisible by the sum of its digits.
// 21 –> sum of digits –> 2+1 = 3 and 21 is divisible by 3 –> 21/3 = 7.
// 111 is a Harshad number because it is divisible by the sum of its digits.
// 111 –> sum of digits –> 1+1+1 = 3 and 111 is divisible by 3 –> 111/3 = 37
// 153 is a Harshad number. It is divisible by the sum of its digits.
// 153 –> sum of its digits –> 1+5+3 = 9 and 153 is divisible by 9 –> 153/9 = 17

#include <iostream>

using namespace std;

int main() 
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int reminder;
    int sum=0;
    
    int test=n;
    
    while(test!=0)
    {
        reminder=test%10;
        sum=sum+reminder;
        test=test/10;
    }
    
    if(n%sum==0)
        cout<<n<<" is a Harshad number because it is divisible by the sum of its digits.";
    else
        cout<<n<<" is not a Harshad / Niven Number !";

    return 0;
}
