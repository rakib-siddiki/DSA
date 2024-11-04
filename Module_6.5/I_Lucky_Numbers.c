
// A number of two digits is lucky if one of its digits is divisible by the other.

// For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

// Given a number between 10 and 99, determine whether it is lucky or not.

// Input
// Only one line containing a single number N
//  (10≤N≤99)
// .

// Output
// Print "YES" if the given number is lucky, otherwise print "NO".

#include <stdio.h>

int main()
{
    int n;          // Input number
    int firstDigit; // First digit of the number
    int lastDigit;  // Last digit of the number

    // Read the input number
    scanf("%d", &n);

    firstDigit = n / 10; // Get the first digit of the two-digit number
    lastDigit = n % 10;  // Get the last digit of the two-digit number

    // Check if the number is lucky
    if (lastDigit == 0 || (firstDigit % lastDigit == 0 || lastDigit % firstDigit == 0))
    {
        // If the number is lucky, print "YES"
        printf("YES");
    }

    else
    {
        // If the number is not lucky, print "NO"
        printf("NO");
    }

    return 0;
}
