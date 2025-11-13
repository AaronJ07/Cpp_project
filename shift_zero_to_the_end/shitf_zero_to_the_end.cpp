/*

You are given a array of integers, for example [2, 1, 0, 8, 0, 7]. 
Write a function that moves all the zeros to the end of the array while keeping the relative order of the non-zero elements the same.

*/

#include<iostream>
using namespace std;

const int ARR_SIZE = 6;

void shift_zero(int* arr)
{
    for(int i = 0; i < ARR_SIZE; i++)
    {
        for(int j = 0; j < i + 1; j++)
            if(i == 0)
            {
                cout << arr[j] << endl;
            }

        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[ARR_SIZE] = {2,1,0,8,0,7};

    shift_zero(arr);

    return 0;
}