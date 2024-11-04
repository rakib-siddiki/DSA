// Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

// absolute value : means to remove any negative sign in front of a number .

// EX : |-5| = 5 , |7| = 7

// Input
// First line contains a number N (1 ≤ N ≤ 105) number of elements.

// Second line contains N numbers (-109  ≤  Ai  ≤  109).

// Output
// Print the absolute summation of these numbers.

#include <stdio.h>

int main()
{
    // Read the number of elements in the array
    int n;
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Initialize a variable to keep track of the absolute summation of the elements in the array
    long long absoluteSummation = 0;

    // Read the elements of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate the summation of the elements in the array
    for (int i = 0; i < n; i++)
    {
        absoluteSummation += arr[i];
    }

    // Calculate the absolute value without using the abs() function
    if (absoluteSummation < 0)
    {
        // If the summation is negative, convert it to positive by multiplying it by -1
        absoluteSummation = absoluteSummation * -1;
    }

    // Print the absolute summation of the elements in the array
    printf("%lld", absoluteSummation);

    return 0;
}


