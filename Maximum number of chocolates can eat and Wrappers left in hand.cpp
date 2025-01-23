// Online C++ compiler to run C++ program online

// Calculate Maximum number of chocolates can eat and Number of wrappers left in hand.
// Money: Total money one has to spend.
// Price: price per chocolate.
// wrappers: minimum number of wrappers for exchange 
// choco: number of chocolate for wrappers.
// Max visit: Maximum number of mes one can visit the shop.(if zero consider it
// infinite)
// example: input: Money:40 Price:1 wrappers:3 choco:1 Max visit:1 Output: total
// chocolate can eat: 53 wrappers le in hand:14 

#include <iostream>

using namespace std;

int main() 
{
    int Money = 40;
    int Price = 1;
    int wrappers = 3;
    int choco = 1;
    int Max_visit = 6, visit = 1;
    
    int no_of_chocolate = Money / Price;
    int no_of_wrappers =  no_of_chocolate;
    
    cout<<"No. of Chocolates : "<<no_of_chocolate<<endl;
    cout<<"No. of Wrappers = No. of Chocolates : "<<no_of_wrappers<<endl;
    cout<<"---------------------------------------------"<<endl;
    
    int new_chocolates;
    while(visit <= Max_visit and no_of_wrappers/wrappers != 0) // When new_chocolates becomes zero. i.e, no more trading can be done.
    {

        cout<<"For Visit : "<<visit<<endl<<endl;
        new_chocolates = no_of_wrappers / wrappers;
        cout<<"New Chocolates after trading Wrappers : "<<new_chocolates<<endl;
        
        cout<<"No. of Wrappers left in hand : "<<no_of_wrappers % wrappers<<" + ";
        no_of_wrappers = (no_of_wrappers % wrappers) + new_chocolates;
                        // Remaining Wrappers  // Wrappers of New Chocolates
        cout<<new_chocolates<<" = "<<no_of_wrappers<<endl<<endl;
        
        no_of_chocolate += new_chocolates;
        cout<<"Total Chocolates Consumed : "<<no_of_chocolate<<endl;
        cout<<"---------------------------------------------"<<endl;
        
        
        visit++;
    }

    return 0;
}
