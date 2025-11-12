// Write a Program to Search an Element in an Array (Linear Search).

#include<iostream>
using namespace std;

const int ARR_SIZE = 6;

int linear_search(int arr[ARR_SIZE], int target)
{
    for(int i = 0; i < arr[ARR_SIZE]; i++)
    {
        if(arr[i] == target)
        {
            cout << target << " found in the element " << i;
            break;
        }
        else
        {
            cout << target << " not found in the arr[]." << endl;
            break;
        }
    }
}

int main()
{
    int arr[ARR_SIZE] = {10, 11, 7, 8, 2, 9};
    int target = 19;

    linear_search(arr, target);

    return 0;
}
