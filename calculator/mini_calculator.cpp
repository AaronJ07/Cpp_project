#include<iostream>

using namespace std;

const char n = '\n';

int main()
{
    float num_1, num_2 , ans;
    char selection, operation;

    cout << "==================================================" << n;
    cout << "\tA mini calculator" << n;
    cout << "==================================================" << n << n;

    cout << "Please enter the first number: ";
    cin >> num_1;

    cout << "Please enter the second number: ";
    cin >> num_2;
    cout << n;

    cout << "Select the operation that you want to do: " << n;
    cout << "\tA. Add" << n << "\tD. Divide" << n << "\tM. Multiple" << n << "\tS. Subtract" << n;
    cout << n;
    cout << "Enter your selection (A, D, M or S): ";
    cin >> selection;
    cout << n;

    if(selection == 'A')
        ans = num_1 + num_2;
    else if(selection == 'D')
        ans = num_1 - num_2;
    else if(selection == 'M')
        ans = num_1 * num_2;
    else if(selection == 'S')
        ans = num_1 / num_2;
    else
        cout << "invalid value";

    if(selection == 'A')
        operation = '+';
    else if(selection == 'D')
        operation = '-';
    else if(selection == 'M')
        operation = '*';
    else if(selection == 'S')
        operation = '/';
    else
        cout << "invalid value";

    cout << num_1 << " " << operation  << " " << num_2 << " " << "=" << " " << ans;

    return 0;
}
