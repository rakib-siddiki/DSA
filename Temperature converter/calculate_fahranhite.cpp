#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double fahranhite, temp;

    cout << "enter your fahranhite :";
    cin >> fahranhite;

    temp = (fahranhite - 32) / 1.8;
    cout << "converted fahranhite to celsius is : " << temp;
    getch();
}
