// Write a Program to Print the ASCII Value of a Character.

#include<iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter any character: ";
    cin >> character;

    if(character == 'A' || character == 'a')
    {
        cout << "ASCII Value of 'A' = 65" << endl;
    }
    else
    {
        cout << "404 Not Found" << endl;
    }

    return 0;
}
