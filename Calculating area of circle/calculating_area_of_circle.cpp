#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    double redius, area;

    cout << "enter your radius of the circle:";
    cin >> redius;

    area = M_PI * pow(redius, 2);
    cout << "The area of the circle is =" << area;

    getch();
}