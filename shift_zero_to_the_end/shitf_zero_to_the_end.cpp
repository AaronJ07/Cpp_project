/*

You are given a array of integers, for example [2, 1, 0, 8, 0, 7]. 
Write a function that moves all the zeros to the end of the array while keeping the relative order of the non-zero elements the same.

*/

#include<iostream>
using namespace std;

const int ARR_SIZE = 6;

void shift_zero(int* arr)
{
    int temp = 0;

    for(int i = 0; i < ARR_SIZE; i++)
    {
        if(arr[i] != 0)
        {
            arr[temp] = arr[i];
            temp++;
        }
    }

    while (temp < ARR_SIZE)
    {
        arr[temp] = 0;
        temp++;
    }
    
}

int main()
{
    int arr[ARR_SIZE] = {2,1,0,8,0,7};

    shift_zero(arr);

    for(int i = 0; i < ARR_SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}