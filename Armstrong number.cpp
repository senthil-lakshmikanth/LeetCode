// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    int num;
    cout<<"Enter number : ";
    cin >> num;
    int temp=num;
    int ognum=num;
    int count=0;
    int result=0;
    
    while(num != 0)
    {
        num=num/10;
        count++;
    }
    
    while(temp != 0)
    {
        int digits=temp%10;
        int tothepower= pow(digits, count);
        result=result+ tothepower;
        temp=temp/10;
    }
    
    if(result == ognum)
        cout<<"Armstrong number";
    else
        cout<<"Not an Armstrong number";

    
    return 0;
}
