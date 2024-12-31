// Online C++ compiler to run C++ program online
// Write a Java program to take input number from the user, reverse it and add it to
// itself. If the sum is not a palindrome then repeat the procedure until you get a
// palindrome.
// Example :
// If 7325 is input number, then
// 7325 (Input Number) + 5237 (Reverse Of Input Number) = 12562
// 12562 + 26521 = 39083
// 39083 + 38093 = 77176
// 77176 + 67177 = 144353
// 144353 + 353441 = 497794 (Palindrome)
// Input : 
// Enter Number :7325
// Output:
// 7325 + 5237 = 12562
// 12562 + 26521 = 39083
// 39083 + 38093 = 77176
// 77176 + 67177 = 144353
// 144353 + 353441 = 497794

#include <iostream>

using namespace std;

int main() 
{
    int og_number;
    cout<<"Enter number : ";
    cin>>og_number;
    
    int temp=og_number;
    int reversed_number=0;
    int reminder=0;
    
    while(true)
    {
        while(temp!=0)
        {
            reminder=temp%10;
            reversed_number=(reversed_number*10)+reminder;
            temp=temp/10;
        }

        if(reversed_number==og_number)
            break;
        else
        {
            temp=og_number+reversed_number;
            cout<<og_number<<" + "<<reversed_number<<" = "<<temp<<endl;
            og_number=temp;
            reversed_number=0;
            
        }
    }
    return 0;
}
