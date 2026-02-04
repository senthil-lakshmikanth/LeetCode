// Check IP address: 
// The IP address must be in the form of string like A.B.C.D 
// The length of A, B, C, or D can't be greater than 3. 
// The value of A, B, C, and D should lie between 0 to 255. Following are the valid 
// combina ons of each number of an IP address. 
// Any one- or two-digit number. 
// Any 3-digit number beginning with 1. 
// Any 3-digit number beginning with 2 if the second digit is 0 through 4. 
// Any 3-digit number beginning with 25 if the third digit is 0 through 5. 
// Leading 0's is not allowed. 
// Example 
// Input: str = "172.16.254.1" 
// Output: True 
// Input: str = "000.123.12.23.28" 
// Output: False 
// Input: str = "I.Am.not.an.ip" 
// Output: False

#include<iostream>
using namespace std;

bool legitip(int temp)
{
    if(temp >= 1 and temp <= 255)
        return 1;
    else
        return 0;
}

int main()
{
    // string ip = "172.001.255.1." ;
    string ip = "172.16.254.1" ;
    // cin >> ip;

    int length = ip.length();
    char no;
    int temp = 0;
    int count = 0;
    bool flag = 1;

    for(int i = 0; i < length; i++)
    {
        if(ip[i] - 48 >= 0 and ip[i] - 48 <= 9)
            temp = temp * 10 + (ip[i] - 48);
        else
            if(ip[i] == '.' and count < 3)
            {
                if(!legitip(temp))
                    flag = 0;

                count++;
                temp = 0;
            }
            else
            {
                flag = 0;
                break;
            }          
    }

    if(!legitip(temp))
        flag = 0;

    if(flag and count == 3)
        cout << "legit ip : " <<  ip;
    else
        cout << "false ip :" << ip;
}
