/*

You are given two arrays of integers:

arr1 = [1, 2, 3, 4, 5, 6]
arr2 = [7, 8, 9, 0, 5, 6]


Write a function that finds and prints the first element that intersect in both arrays.

*/

#include<iostream>
using namespace std;

const int ARR_SIZE = 6;

void find_first_intersection(int* arr1, int* arr2)
{
    bool found = false;

    for(int i = 0; i < ARR_SIZE; i++)
    {
        for(int j = 0; j < ARR_SIZE; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << "The first element that intersect in both arrays is: " << arr1[i] << endl;
                found = true;
                return;
            }
        }
    }

    if(found == false)
    {
        cout << "No intersect in both arrays" << endl;
    }
}

int main()
{
    int arr1[ARR_SIZE] = {1, 2, 3, 4, 5, 6};
    int arr2[ARR_SIZE] = {7, 8, 9, 0, 5, 6};

    find_first_intersection(arr1, arr2);

    return 0;
}