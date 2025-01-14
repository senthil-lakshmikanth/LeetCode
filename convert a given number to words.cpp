// Online C++ compiler to run C++ program online

// Write code to convert a given number into words.

// Examples: 


// Input: 438237764
// Output: forty three crore eighty two lakh thirty seven thousand seven hundred and sixty four 


// Input: 999999
// Output: nine lakh ninety nine thousand nine hundred and ninety nine


// Input: 1000
// Output: one thousand 
// Explanation: 1000 in words is “one thousand”

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void two_digit_number_to_words(int number)
{
    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    
    while(true)
    {
        if(number >= 0 and number < 100 )
        {
            if(number >= 0 and number <=9 )
            {
                cout<<ones[number]<<" ";
                break;
            }
            if(number >= 11 and number <=19 )
            {
                cout<<teens[number-10]<<" ";
                break;
            }
            else
            {
                int first_number=number/10;
                cout<<tens[first_number]<<" ";
            }
        }
        number%=10;
    }
}

void hundreds(int number)
{
    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    if(number >=100 and number <=999)
    {
        int first_number=number/100;
        cout<<ones[first_number]<<" "<<"Hundred and ";
        number=number%100;
        two_digit_number_to_words(number);
    }
}

int main() 
{
    // int number=1000;   
    // int number=999999;
    int number=438237764;
    
    int count=0;
    
    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    int temp=number;
    while(temp!=0)
    {
        count++;
        temp/=10;
    }
    
    string scales[] = {"crore", "lakh", "thousand"};
    int index=0;
    
    while(count!=0)
    {
        int divisor = pow(10, --count);
        int quotient = number/divisor;

        if(number<1000)
        {
            hundreds(number);
            count=0;
        }
        else
        {
            if(count%2==0 and quotient!=0)
                cout<<tens[quotient]<<" ";
            if(count%2==1 and quotient!=0)
                cout<<ones[quotient]<<" ";
        }
        switch(count)
        {
            case 3 : cout<<scales[2]<<" ";
                break;
            case 5 : cout<<scales[1]<<" ";
                break;
            case 7 : cout<<scales[0]<<" ";
                break;
        }

        number=number%divisor;
    }

    return 0;
}
