// Online C++ compiler to run C++ program online

// Input: dt1 = {10, 2, 2014} dt2 = {10, 3, 2015}
// Output: 393 
// dt1 represents “10-Feb-2014” and dt2 represents “10-Mar-2015” The
// dierence is 365 + 28
// Input: dt1 = {10, 2, 2000} dt2 = {10, 3, 2000}
// Output: 29
// Note that 2000 is a leap year
// Input: dt1 = {10, 2, 2000} dt2 = {10, 2, 2000}
// Output: 0
// Both dates are same
// Input: dt1 = {1, 2, 2000}; dt2 = {1, 2, 2004};
// Output: 1461
// Number of days is 365*4 + 1

#include <iostream>

using namespace std;

int main() 
{
    int dt1[] = {24, 4, 2002}; 
    int dt2[] = {18, 1, 2025}; // Enter Future date / larger than dt1[] here
    
    int days;
    int days_in_years;
    
    int years = dt2[2] - dt1[2];
    days_in_years = years * 365;

    days_in_years = days_in_years + (years/4);
        
    // -------------------------------    
    
    int month1=0;
    for(int i=dt1[1]; i<=12; i++) // Iterate from the starting of the month to the end of the year. Month of dt1.
    {
        if(i>7)
            (i%2==0) ? month1+=31 : month1+=30;
        else
        {
            if(i%2==0 and i!=2) month1+=30;
            if(i%2==1) month1+=31;
            if(i==2) 
                if(dt1[2]%4==0)  // If leap year.
                    if(dt1[2]%100==0)
                        (dt1[2]%400==0) ? month1+=29 : month1+=28;
                    else
                        month1+=29;
                else
                    month1+=28;
        }
    }
    month1=month1-dt1[0]; // minus the number of days in that month.
    
    int month2=0;
    for(int i=dt2[1]; i<=12; i++) // Iterate from the starting of the month to the end of the year. Month of dt2.
    {
        if(i>7)
            (i%2==0) ? month2+=31 : month2+=30;
        else
        {
            if(i%2==0 and i!=2) month2+=30;
            if(i%2==1) month2+=31;
            if(i==2) 
                if(dt2[2]%4==0)  // If leap year.
                    if(dt2[2]%100==0)
                        (dt2[2]%400==0) ? month2+=29 : month2+=28;
                    else
                        month2+=29;
                else
                    month2+=28;
        }
    }
    month2=month2-dt2[0]; // minus the number of days in that month.
    
    int remaining_days_in_year_1 = days_in_years - month2;
    days = month1 + remaining_days_in_year_1;
    
    cout<<days;
    
    return 0;
}
