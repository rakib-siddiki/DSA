#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, num2;
    cout << "eneter first a number :";
    cin >> num;
    cout << "enter your second number :";
    cin >> num2;
    cout << "your enterd numbers sum is = " << num + num2 << endl;
    cout << "your enterd numbers multipication is = " << num * num2 << endl;
    cout << "your enterd numbers divide is = " << num / num2 << endl;
    cout << "your enterd numbers reminder is = " << num % num2;

    getch();
}