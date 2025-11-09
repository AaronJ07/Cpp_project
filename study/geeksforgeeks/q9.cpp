// Write a Program to Check if a Given Year Is a Leap Year.

#include<iostream>
using namespace std;

bool check_year(int year)
{
    if(year % 400 == 0)
    {
        return true;
    }
    else if(year %100 != 0)
    {
        return true;
    }
    else if(year % 4 == 0)
    {
        return true;
    }
}

int main()
{
    int year;
    cout << "Please enter a year: ";
    cin >> year;

    check_year(year);

    if(true)
    {
        cout << year << " is a Leap Year." << endl;
    }
    else if(false)
    {
        cout << year << " not a Leap Year." << endl;
    }

    return 0;
}
