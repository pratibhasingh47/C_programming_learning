// Write a program to check whether a given number is positive, negative or zero. If the number is positive, check the number is divisible by 10 or not.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("\n%d", &a);
    if (a > 0)
    {
        printf("\nPOSITIVE");
        if (a % 10 == 0)
        {
            printf("\nNo. is divisible by 10");
        }
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