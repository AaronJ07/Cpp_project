#include<iostream>
#include<string>
using namespace std;

int main()
{
    float a,b,result;
    char operation;

    cout << "Please enter two number: ";
    cin >> a >> b;

    cout << "Please select what operation you want to perform (+,-,*,/): ";
    cin >> operation;

    if (operation == '+')
    {
        cout << a + b;

    }else if (operation == '-')
    {
        cout << a - b;

    }else if (operation == '*')
    {
        cout << a * b;

    }else if (operation == '/')
    {
        cout << a / b;

    }else
    {
        cout << "Error";
    }
    
    return 0;
    
}