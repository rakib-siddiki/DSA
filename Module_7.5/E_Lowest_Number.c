// Given a number N and an array A of N numbers. Print the lowest number and its position.

// Note: if there are more than one answer print first one's position.

// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers (-10^5  ≤  Ai  ≤  10^5).

// Output
// Print the lowest number and its position (1-index).

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int minValue = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
            index = i;
        }
    }
    printf("%d %d", minValue, index + 1);
    return 0;
}
