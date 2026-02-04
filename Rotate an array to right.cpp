// Java Program to rotate(right) an array 
// input array:[1,2,3,4,5,6,7] 
//       rotate:2 
// output :[3,4,5,6,7,1,2] 
// input array:[90,45,67,54,32,78] 
//       rotate:1 
// output :[45,67,54,32,78,90] 

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int rotate = 98 % size;

    int temp[rotate];

    for(int i = 0; i < size; i++)
    {
        if(i < rotate)
            temp[i] = arr[i];
        else
            arr[i - rotate] = arr[i];
    }

    for(int i = 0; i < rotate; i++)
        arr[size - rotate + i] = temp[i];

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";    
}
