#include <iostream>

// Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is like sorting playing cards in your hands. You split the cards into two groups: the sorted cards and the unsorted cards. Then, you pick a card from the unsorted group and put it in the right place in the sorted group.

// We start with second element of the array as first element in the array is assumed to be sorted.
// Compare second element with the first element and check if the second element is smaller then swap them.
// Move to the third element and compare it with the first two elements and put at its correct position
// Repeat until the entire array is sorted.

using namespace std;

int main() 
{
    int array[5] = {64, 25, 12, 22, 11};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i=1; i<n; i++) 
    {
        int key=array[i]; // The element to be placed in the sorted part
        int j=i-1;
                
                // Shift elements of the sorted part that are greater than the key
        while (j>=0 and array[j]>key) 
        {
            array[j+1]=array[j];
            j--;
        }

        // Place the key in its correct position
        array[j+1]=key;
    }


    for (int i = 0; i < n; i++) 
    {
        cout << array[i] << " ";
    }

    return 0;
}
