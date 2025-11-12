#include<iostream>
#include<iomanip>   // To set the decimal places of sorted marks to 2

using namespace std;

// Get the marks from user
void InputMarks(double *marks, int numberStudent)
{
    for(int i = 0; i < numberStudent; i++)
    {
        cout << "Please enter the mark for student " << i+1 << ": ";
        cin >> marks[i];
        cout << endl;
    }
    cout << endl;
}

// Calculate the average marks
void calculateAverage(double *marks, int number_student)
{
    float sum = 0, avg = 0;

    // Total the marks
    for(int i = 0; i < number_student; i++)
    {
        sum += marks[i];
    }

    avg = sum / number_student;

    // Set the decimal places of average mark to 2 and print the average mark
    cout << "The average of marks is: " << fixed << setprecision(2) << avg << endl << endl;
}

// Perform the bubble sort
void sortMarks(double *marks, int number_student)
{
     for(int i = 0; i < number_student - 1; i++)
        {
            for(int j = 0; j < number_student - i - 1; j++)
            {
                float tmp;

                // Swap two numbers if the second number smaller than the first number
                if(marks[j] > marks[j + 1])
                {
                    tmp = marks[j];
                    marks[j] = marks[j + 1];
                    marks[j + 1] = tmp;
                }
            }
        }

        // Set the decimal places of marks to 2 and print the marks after sorted
        cout << fixed << setprecision(2) << "The marks after sort is: ";

        for(int i = 0; i < number_student; i++)
        {
            cout << marks[i] << "  ";
        }

        cout << endl << endl;
}

int main()
{
    // Declare the variables needed
    int number_student;
    char operation, status;

    cout << "Please enter the number of student: ";
    cin >> number_student;    // Get the number of student from user
    cout << endl;

    // Use dynamic variables to allocates memory dynamically for a flexible array size according to user input
    double *marks = new double[number_student];

    InputMarks(marks, number_student);       // Called InputMarks function

    // Loop for menu
    do
    {
        cout << "------------------------------------------------------------------------- " << endl;
        cout << "|               Welcome, What you want to perform today ^-^             |" << endl;
        cout << "|                   1. Calculate the average of marks                   |" << endl;
        cout << "|                   2. Sort the marks                                   |" << endl;
        cout << "------------------------------------------------------------------------- " << endl;
        cout <<" Please enter your's choice (1 / 2)  ^o^: ";
        cin >> operation;
        cout << endl;

        // Perform the operation based on user needs
        switch (operation)
        {
            case '1':
                calculateAverage(marks, number_student);
                break;
            case '2':
                 sortMarks(marks, number_student);
                 break;
            default:
                cout << "404 Not Found! Please try again! T_T" << endl;
                cout << endl;
                break;
        }

        cout << "Do you want to continue (y/n): ";
        cin >> status;
        cout << endl;

        // Check the status from user input
        if(status == 'N' || status == 'n')
        {
            cout << "Goodbye! Hope to see you soon! ^-^ " << endl;   // Print when user key in N or n
        }else if(status == 'Y' || status == 'y')
        {
            cout << endl;   // Continue to loop the the menu
        }else{
            cout << "404 Not found! Please try again! T_T" << endl;    // Print when user key in an invalid symbol, words and numbers
            cout << "Goodbye! Hope to see you soon! ^-^ " << endl;
        }

    }while(status == 'Y' || status == 'y');   // Continue while the user key in Y or y

    return 0;
}
