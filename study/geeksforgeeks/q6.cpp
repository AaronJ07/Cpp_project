// Write a Program to Find Compound Interest.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int principle, time;
    float rate, amount, compound_interest;

    cout << "Please enter the amount of principle: ";
    cin >> principle;
    cout << endl;

    cout << "Please enter the rate: ";
    cin >> rate;
    cout << endl;
    rate = 1 + rate / 100;

    cout << "Please enter the time: ";
    cin >> time;
    cout << endl;

    amount = principle * pow(rate, time);
    compound_interest = amount - principle;

    cout << "Compound Interest: " << compound_interest << endl;

    return 0;
}
