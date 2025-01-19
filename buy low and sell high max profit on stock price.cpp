// Online C++ compiler to run C++ program online

// You are given an array prices where prices[i] is the price of a given stock on
// the day.
// You want to maximize your prot by choosing a single day to buy one stock and
// choosing a dierent
// day in the future to sell that stock.
// Return the maximum prot you can achieve from this transacon. If you
// cannot achieve any
// prot, return 0.
// Input-1 : prices = [7,1,5,3,6,4]
// Output-1 : 5 
// Explanaon: Buy on day 2 (price = 1) and sell on day 5 (price = 6), prot = 6-1 =
// 5.
// Input-2 : prices = [7,6,4,3,1]
// Output-2 : 0

#include <iostream>

using namespace std;

int main() // Efficient Traverse only once.
{
    int price[6] = {7,1,5,3,6,4};
    // int price[5] = {7,6,4,3,1};
    
    int buy=price[0];
    int sell, max_profit=0;
    for(int i=0; i<6; i++)
    {
       if(price[i] < buy)
           buy = price[i];
           
       int profit = price[i] - buy;
       
       if(profit > max_profit)
       {
           max_profit = profit;
           sell = price[i];
       }
    }
    
    cout<<"Buy stock at "<<buy<<" and sell at "<<sell<<". Profit : "<<max_profit;
    
    return 0;
}

//---------------------------------------------------------------------------------------------------

int main() 
{
    int array[6] = {7,1,5,3,6,4};
    // int array[5] = {7,6,4,3,1};
    
    int buy, sell, max_profit=0;
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(array[j]-array[i]>max_profit)
            {
                max_profit=array[j]-array[i];
                
                buy=array[i];
                sell=array[j];
            }
        }
    }
    cout<<"Buy stock at "<<buy<<" and sell at "<<sell<<". Profit : "<<max_profit;
    return 0;
}
