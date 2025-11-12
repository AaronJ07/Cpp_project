#include<iostream>

using namespace std;

//global variables declaration
const float pi = 3.1415926;
const char n = '\n';

int main()
{
    //variables declaration
    float V, r, h;
    char name[50];

    //get user name
    cout << "Please enter your name: ";
    cin.getline(name, 50);
    cout << "Hi, " << name << "!" << n;

    //get value from user
    cout << "Please enter the radius of the cone: ";
    cin >> r;

    cout << "Please enter the height of the cone: ";
    cin >> h;

    //Calculate the volume
    V = pi * r * r * (h / 3);

    //display result
    cout << "The volume of the cone is: " << V << "!" << n;

    return 0;
}
