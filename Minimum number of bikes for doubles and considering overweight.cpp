// Online C++ compiler to run C++ program online

// Given an array of values persons[], each represents the weight of the
// persons. There will be innite bikes available. Given a value K which represents
// the maximum weight that a bike accommodates. Along with that one more
// condion, a bike can carry two persons at a me. You need to nd out the least
// number of mes, the bike trips are made. 

#include <iostream>
#include <algorithm>

using namespace std;

void minBikeTrips(int persons[], int n, int K)
{
    sort(persons, persons + n);
    
    cout<<"Persons ordered by their weight : ";
    for(int i=0; i<n; i++)
    {
        cout<<persons[i]<<" ";
    }
    cout<<endl<<endl;
    
    int total_bike = 0; 
    int lean = 0;
    int fat = n-1;
    
    while(lean <= fat)
    {
        if(persons[lean] + persons[fat] <= 100)
        {
            cout<<"Person "<<lean+1<<" ("<<persons[lean]<<"kg) and Person "<<fat+1<<" ("<<persons[fat]<<"kg) in one bike"<<endl;
            total_bike++;
            lean++;
            fat--;
        }
        else
        {
            cout<<"Person "<<fat+1<<" ("<<persons[fat]<<"kg) alone in one bike"<<endl;
            fat--;
            total_bike++;
        }
    }
    
    cout<<endl<<"Total bikes = "<<total_bike;
}   

int main() 
{
    int  persons[] = {50, 70, 80, 30, 40};
    int n = sizeof(persons) / sizeof(persons[0]);
    
    int K = 100;
    
    minBikeTrips(persons, n, K);
    
    return 0;
}
