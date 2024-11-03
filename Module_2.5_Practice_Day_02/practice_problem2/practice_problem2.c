
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // find the minimum number
    if (a <= b && a <= c)
    {
        printf("min = a-%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("min = b-%d ", b);
    }else
    {
        printf("min = c-%d ", c);
        
    }
    // find the maximum number
    if (a >= b && a >= c)
    {
        printf("max = a-%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("max = b-%d", b);
    }else
    {
        printf("max = c-%d", c);
        
    }
    
}
