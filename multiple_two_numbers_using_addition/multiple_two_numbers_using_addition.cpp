/*

You are given two integers, for example:

Input: 7 , 5
Output: 35


Write a function that computes the product of a and b using only the + operator.
You are not allowed to use *, /, or built-in multiplication functions.

*/

#include<iostream>
using namespace std;

const int ARR_SIZE = 2;

int multiple_two_numbers(int a, int b)
{
    if(a == 0 || b == 0)
    {
        return 0;
    }

    if(b <= 0)
    {
        return - multiple_two_numbers(a, -b);
    }

    return a + multiple_two_numbers(a, b - 1);
}

int main()
{
    int a, b;
    cout << "Please enter a number: ";
    cin >> a;
    cout << "Please enter another number: ";
    cin >> b;

    cout << "Result is: " << multiple_two_numbers(a, b) << endl;

    return 0;
}