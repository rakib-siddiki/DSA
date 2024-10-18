
// You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.
// See the sample input and output for more clarification.
// for and example
// 10 is enven
// 13 is odd
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % 2 == 0)
    {
        printf("%d", a);
        printf(" is a Even number");
    }
    else
    {
        printf("%d", a);
        printf(" is a Odd number");
    }
}
