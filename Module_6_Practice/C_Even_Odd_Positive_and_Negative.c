
// Given N numbers. Count how many of these values are even, odd, positive and negative.

// Input
// First line contains one number N (1 ≤ N ≤ 103) number of values.

// Second line contains N numbers (-105 ≤ Xi ≤ 105).

// Output
// Print four lines with the following format:

// First Line: "Even: X", where X is the number of even numbers in the given input.

// Second Line: "Odd: X", where X is the number of odd numbers in the given input.

// Third Line: "Positive: X", where X is the number of positive numbers in the given input.

// Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

#include <stdio.h>
int main()
{
    int x, num;
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
    // Read the number of inputs
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        // Read each number
        scanf("%d", &num);

        // Check if the number is even or odd
        if (num % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        // Check if the number is positive, negative or zero
        if (num > 0)
        {
            positiveCount++;
        }
        else if (num < 0)
        {
            negativeCount++;
        }

    }
    
    // Output the results
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);

    return 0;
}
