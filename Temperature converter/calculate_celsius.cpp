#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double celsius, temp;

    cout << "enter your celsius :";
    cin >> celsius;

    temp = 1.8 * celsius + 32;
    cout << "converted celsius to fahranhite is : " << temp;
    getch();
}
