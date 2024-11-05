// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Replace every positive number by 1.
// Replace every negative number by 2.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers (-10^5  ≤  Ai  ≤  10^5).

// Output
// Print the array after the replacement and it's values separated by space.

#include <stdio.h>

// Main function
int main()
{
    int n;

    // Read the number of elements in the array
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Loop over the array and replace each element as per the instructions
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1; // Replace positive numbers with 1
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2; // Replace negative numbers with 2
        }
    }
    // Print the modified array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
