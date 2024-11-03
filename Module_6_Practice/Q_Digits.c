// Given a number N. Print the digits of that number from right to left separated by space.

// Input
// First line contains a number T (1 <= T <= 10) number of test cases.

// Next T lines will contain a number N (0 <= N <= 10^9)

// Output
// For each test case print a single line contains the digits of the number separated by space.

#include <stdio.h>

// Main function
int main()
{
    int testCase; // The number of test cases
    scanf("%d", &testCase); // Read the number of test cases

    // Loop through each test case
    for (int i = 0; i < testCase; i++)
    {
        int num;           // The number to be processed
        scanf("%d", &num); // Read the number

        // Process the number
        do
        {
            // Get the last digit of the number
            int lastDigit = num % 10;

            // Print the last digit
            printf("%d ", lastDigit);

            // Remove the last digit from the number
            num /= 10;
        } while (num != 0); // Continue until the number becomes 0

        // Print a newline

        printf("\n");
    }

    return 0;
}
