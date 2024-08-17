#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    double base, height, area;

    cout << "enter your base :";
    cin >> base;

    cout << "enter your height :";
    cin >> height;

    // way 1
    // area = (float)1 / 2 * base * height; // 1/2 with out floating the out put will be 0 because 1 and 2 they are both int number and int can't give Decimal numbers

    // way 2
    // area = 1.0 / 2 * base * height; // here i've given the dicimal number at fist that why 1.0/2 are not both int anymore

    // way 3
    area = 0.5 * base * height; // 1/2 is basically 0.5 so i can give like this as well

    cout << "Your area of triangle is = " << area;
    
    getch();
}