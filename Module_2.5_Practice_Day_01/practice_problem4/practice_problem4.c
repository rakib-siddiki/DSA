// You need to take one integer value as input and tell if the value is positive or negative or zero.
// See the sample input and output for more clarification.

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0)
    {
        printf("%d", a);
        printf(" the value is zero");
    }
    else if (a>0)
    {
        printf("%d", a);
        printf(" the value is Positive number ");
    }
    else
    {
        printf("%d", a);
        printf(" the value is a Nagetive number");
    }
}
