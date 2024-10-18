// You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

// For example:
// Inputs are 5 and 2
// Then you’ll give output as:
// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50

#include <stdio.h>
int main(){
    int a,b,result;

    scanf("%d %d",&a,&b);
    // addition
    result = a+b;
    printf("%d",a); printf(" + "); printf("%d",b); printf(" = "); printf("%d\n",result);
    // subtraction
    result = a-b;
    printf("%d",a); printf(" - "); printf("%d",b); printf(" = "); printf("%d\n",result);
    // multiplication
    result = a*b;
    printf("%d",a); printf(" * "); printf("%d",b); printf(" = "); printf("%d\n",result);
    // division
   float resultDivision = (float)a/b;
    printf("%d",a); printf(" / "); printf("%d",b); printf(" = "); printf("%.02f\n",resultDivision);
}
