// Write a Program to Find the Largest Among 3 Numbers.

#include<iostream>
using namespace std;

int find_largest(int a, int b, int c)
{
    if(a > b)
    {
        if(b > c)
        {
            cout << a << " is the largest." << endl;
        }
    }
    else if(a < b)
    {
        if( b > c)
        {
            cout << b << " is the largest." << endl;
        }
        else
        {
            cout << c << " is the largest." << endl;
        }
    }
}
int main()
{
    int a,b,c;

    cout << "Please enter 3 number with spacing: ";
    cin >> a >> b >> c;

    find_largest(a,b,c);

    return 0;
}
