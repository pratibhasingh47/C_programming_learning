//Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    printf("Enter the no.\n");
    scanf("%f\n%f\n%f\n%f\n%f", &a, &b, &c, &d, &e);
    if ((a + b + c + d + e) / 5 >= 33)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}