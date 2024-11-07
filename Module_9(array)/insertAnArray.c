#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // Read the number of elements from the user

    // Declare an array with size n + 1 to accommodate the new element that will be inserted
    int arr[n + 1];

    // Loop to read n elements into the array from the user
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    int position, value;
    scanf("%d %d", &position, &value); // Read the position and value from the user

    // Check if the specified position is within the valid range
    if (position < 0 || position > n)
    {
        printf("Invalid position\n"); // Print an error message if the position is not valid
        return 1;                     // Exit the program with an error code
    }

    // Shift elements to the right from the specified position to create space for the new element
    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1]; // Move each element one position to the right
    }

    arr[position] = value; // Insert the new element at the specified position

    // Loop to print all elements of the array including the newly inserted element
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]); // Print each element followed by a space
    }

    return 0; // Return 0 to indicate successful execution
}
