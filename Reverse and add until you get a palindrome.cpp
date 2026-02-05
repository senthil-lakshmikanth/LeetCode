// Reverse and add until you get a palindrome : 
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

int reverseNumber(int n)
{
    int rn = 0;;

    while(n)
    {
        rn = rn * 10 + (n % 10); // Last digit = n % 10;
        n /= 10;
    }

    return rn;
}

int main()
{
    int n = 12562;
    int rn = reverseNumber(n);

    while(n != rn) // check Palindrome
    {
        cout << n << " + " << rn << " = " << n + rn << "\n";

        n += rn;
        
        rn = reverseNumber(n);
    }

    return 0;
}
