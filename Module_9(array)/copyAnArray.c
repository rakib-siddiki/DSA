#include <stdio.h>

int main()
{
    int n;           // Declare a variable to store the size of the first array
    scanf("%d", &n); // Read the size of the first array from the user
    int arrA[n];     // Declare the first array with the given size

    // Loop to read elements into the first array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrA[i]); // Read each element into the array
    }

    int m;           // Declare a variable to store the size of the second array
    scanf("%d", &m); // Read the size of the second array from the user
    int arrB[m];     // Declare the second array with the given size

    // Loop to read elements into the second array
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arrB[i]); // Read each element into the array
    }

    int finalSize = n + m;   // Calculate the total size of the final array
    int finalArr[finalSize]; // Declare the final array with the calculated size

    // Copy elements from the first array to the final array
    for (int i = 0; i < n; i++)
    {
        finalArr[i] = arrA[i]; // Assign each element from arrA to finalArr
    }

    int secondIndex = n; // Initialize a variable to track the position in finalArr for arrB
    // Copy elements from the second array to the final array
    for (int i = 0; i < m; i++)
    {
        finalArr[secondIndex] = arrB[i]; // Assign each element from arrB to finalArr
        secondIndex++;                   // Increment the position for the next element
    }

    // Loop to print all elements of the final array
    for (int i = 0; i < finalSize; i++)
    {
        printf("%d ", finalArr[i]); // Print each element followed by a space
    }

    return 0; // Return 0 to indicate successful execution
}
