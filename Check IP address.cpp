// Online C++ compiler to run C++ program online
// The IP address must be in the form of string like A.B.C.D
// The length of A, B, C, or D can't be greater than 3.
// The value of A, B, C, and D should lie between 0 to 255. Following are the valid
// combinaons of each number of an IP address.
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
  
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string ip;
    char ch = '.';
    cout<<"Enter IP address : "
    cin >> ip;

    string strno="";
    int flag=1;
    int count=0;
    
    for(int i=0; i<ip.length()+1; i++)
    {
        if(ip[i]==ch || ip[i]=='\0')
        {
            if(strno.size()>1 and strno[0]=='0')
            {
                flag=0;
                break;
            }
            else
            {
                int myint1 = stoi(strno);
                if(myint1 >=0 && myint1 <= 255)
                {
                    count++;
                }
                else
                {
                    flag=0;
                    break;
                }
                strno="";
            }
        }
        else
        {
            strno=strno+ip[i];
        }
        
    }
    
    if(flag==1 and count==4)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
