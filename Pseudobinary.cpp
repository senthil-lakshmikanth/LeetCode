
// Given a number N. nd the minimum count of numbers in which N can be
// represented as a sum of numbers x1, x2, … xn. where xi is number whose digits
// are 0s and 1s.
// example
// 1) i/p : N = 33
// o/p : count = 3. 33( 11 + 11 + 11 )
// some other possibilies of 33 is (11 + 11 + 10 + 1), (11 + 10 + 10 + 1 + 1 ), (10 +
// 10 + 10 + 1 + 1 + 1) 

#include <iostream>

using namespace std;

int main() 
{
    int N = 350; // Input number
    cout << "Pseudobinary decomposition of " << N << ":\n";

    while (N != 0) 
    {
        int current = 0;
        int multiplier = 1;
        
        int temp = N;

        while (temp != 0) 
        {
            int digit = temp % 10;
            if (digit != 0) 
            {
                current = current + multiplier;
                
            }
            temp /= 10;
            multiplier = multiplier * 10; 
        }
        
        cout << current << " ";
        
        N = N - current; 
    }

    cout << endl;
    return 0;
}
