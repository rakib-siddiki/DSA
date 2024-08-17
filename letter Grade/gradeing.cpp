#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks :";
    cin >> marks;

    if (marks <= 0 || marks > 100)
    {
        cout << "Invalid marks";
    }
    else if (marks >= 33 && marks < 40)
    {
        cout << "your grade is : D";
    }
    else if (marks <= 50)
    {
        cout << "your grade is : C";
    }
    else if (marks <= 60)
    {
        cout << "your grade is : B";
    }

    else if (marks <= 70)
    {
        cout << "your grade is :-A";
    }
    else if (marks <= 80)
    {
        cout << "your grade is :A";
    }

    else if (marks >= 80 && marks <= 100)
    {
        cout << "your grade is :A+";
    }

    getch();
}