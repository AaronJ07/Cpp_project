// Write a Program to Swap Two Numbers.

#include<iostream>
using namespace std;

int swap_num(int a, int b)
{
    cout << "Before swap: " << a << " , " << b <<endl;

    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    cout << "After swap: " << a << " , " << b << endl;
}

int main()
{
    int a,b;
    cout << "Please enter a number: ";
    cin >> a;
    cout << "Please enter another number: ";
    cin >> b;

    swap_num(a,b);

    return 0;
}
