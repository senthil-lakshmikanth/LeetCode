// Online C++ compiler to run C++ program online

// There is a circular queue of processes. Every me there will be certain no of
// process skipped and a parcular start posion. Find the safe posion.
// Input: Number of process:5
// Start posion:3
// Skip: 2nd
// Output: 1 will be the safest posion
// (Logic: 1 2 3 4 5 starng from 3, 5th process will be skipped
// 1 2 3 4 5 process 2 will be skipped
// 1 2 3 4 5 process 4 will be skipped
// 1 2 3 4 5 process 3 will be skipped, so safest process is 1. 


// For the above problem head = 3, k = 2.


#include <iostream>

using namespace std;

void rotate_arrary(int circular_queue[], int n, int k, int head, int tail, int count)
{
    for(int i=head; i<n; i++)
    {
        if(circular_queue[i] != -1)
        {
            count++;
            if(count >= k )
            {
                circular_queue[i] = -1; // kill that element.
                head = i+1;
                count = 0;
            }
        }
        if(i == n-1)
            head = 0;
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<circular_queue[i];
        if(i!=n-1)
            cout<<", ";
        else
            cout<<" ";
    }
    cout<<endl<<"head : "<<head<<" | kill-count : "<<count<<endl;
    cout<<"---------------------------"<<endl;
    
    int total_positive_elements = 0;
    for(int i=0; i<n; i++)
        if(circular_queue[i] >= 0)
            total_positive_elements++;
    
    
    if(total_positive_elements >= k)
        rotate_arrary(circular_queue, n, k, head, tail, count);
        
}

int main() 
{
    int n = 5; 
    int circular_queue[n] = {1,2,3,4,5};
    
    int k = 2; // Kill every second element. 
    
    int head = 3; // keep head = 0 to understand logic and start from first.
    int tail = n-1;
    
    rotate_arrary(circular_queue, n, k, head, tail, 0);

    return 0;
}
