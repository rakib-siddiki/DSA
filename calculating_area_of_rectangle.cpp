#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    double width, height, area;

    cout << " enter your width :";
    cin >> width;

    cout << "enter your height :";
    cin >> height;

    area = width * height;
    cout << "your area of rectangle is = " << area;

    getch();
}