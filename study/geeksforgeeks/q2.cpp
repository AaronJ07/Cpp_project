// Write a Program to Read and Print Number Input from the User.

#include<iostream>
using namespace std;

int read_print(int n)
{
    cout << "Please enter a number: ";
    cin >> n;
    cout << "The number you input is: " << n;
}

int main()
{
    int n;
    read_print(n);

    return 0;
}
