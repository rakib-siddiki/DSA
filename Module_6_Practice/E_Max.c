
// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 10^3).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 10^9).

// Output
// Print the maximum number.

#include <stdio.h>
int main()
{
    int n, num, maxNum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num > maxNum)
        {
            maxNum = num;
        }
    }
    printf("%d", maxNum);

    return 0;
}
