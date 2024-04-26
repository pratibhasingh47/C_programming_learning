// Write a program to print digits of one’s place and tenth’s place of a given number [For example, number is 2345, then digit at one’s place is 5 and digit at 10th place is 4]. Now check whether the digits at both place are equal or not.

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value\n");
    scanf("\n%d", &x);
    y = x % 10;
    printf("\nOnce digit is%d", y);
    int z;
    z = (x % 100) - y;
    int a;
    a = z / 10;
    printf("\nTenth place is %d", a);
    if (y == a)
    {
        printf("\nThe digits at both the places is same");
    }
    else
    {
        printf("\ndigits are not same");
    }
}