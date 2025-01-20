// Online C++ compiler to run C++ program online

// A number is said to be twisted prime if it is a prime number and reverse of
// the number is also a
// prime number.
// Input : 97
// Output : Twisted Prime Number
// Explanaon: 97 is a prime number and its reverse 79 is also a prime number. 

#include <iostream>
#include <cmath>
using namespace std;
int isprime(int n)
{
    
    if(n <= 1)
        return 0;

    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}

void compare(int n) 
{
    bool n1 = isprime(n);
    
    int reversed_number = 0;
    int og_number = n;
    while(n!=0)
    {
        int remainder = n % 10;
        reversed_number = (reversed_number * 10) + remainder;
        n = n / 10;
    }

    bool n2 = isprime(reversed_number);
    
    if(n1==1 and n2==1)
        cout<<og_number<<" and "<<reversed_number<<" are Twisted Prime"<<endl;
    else
        cout<<og_number<<" and "<<reversed_number<<" are Not Twisted Prime"<<endl;

}

int main()
{
    compare(0);
    compare(1);
    compare(2);
    compare(3);
    compare(4);
    compare(5);
    compare(6);
    compare(7);
    compare(10);
    compare(11);
    compare(43);
    compare(97);
    
    return 0;
}
