// Given a lowercase alphabet character. You have to print the next character in the alphabet.
//
// Input
// Only one line containing a lowercase English letter C
// .
//
// Output
// Print the next letter to C
//  in the alphabet.

#include <stdio.h>

int main()
{
    // Declare a character variable x
    char x;

    // Read a character from the standard input and store it in x
    scanf("%c", &x);

    // Check if the character is 'z'
    if (x == 'z')
    {
        // If it is 'z', print 'a' as the next character in the alphabet
        printf("%c", 'a');
    }
    else
    {
        // If it is not 'z', print the next character in the alphabet by adding 1 to the
        // ASCII value of the character
        printf("%c", x + 1);
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}


