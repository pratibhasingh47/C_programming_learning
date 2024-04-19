// Write a program to check whether a given number is positive, negative or zero.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("POSITIVE");
    }
    else if (a == 0)
    {
        printf("ZERO");
    }
    else if (a < 0)
    {
        printf("NEGATIVE");
    }
}