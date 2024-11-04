// Memo and Momo are playing a game. Memo will choose a positive number a
// , and Momo will choose a positive number b
// .

// Your task is to tell them who will win according to the following rules:

// If both a
//  and b
//  are divisible by k
// , both of them win and you should print "Both".
// If a
//  is divisible by k
//  but b
//  isn't, Memo wins and you should print "Memo".
// If b
//  is divisible by k
//  but a
//  isn't, Momo wins and you should print "Momo".
// If both a
//  and b
//  are not divisible by k
// , no one wins and you should print "No One".
// Input
// Only one line containing three positive numbers a
// , b
//  and k
//  (1≤a,b,k≤1018
// ).

#include <stdio.h>
int main()
{
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    // Check divisibility conditions
    int a_divisible = (a % k == 0);
    int b_divisible = (b % k == 0);

    if (a_divisible && b_divisible)
    {
        printf("Both");
    }
    else if (a_divisible)
    {
        printf("Memo");
    }
    else if (b_divisible)
    {
        printf("Momo");
    }
    else
    {
        printf("No One");
    }

    return 0;
}
