// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed. Print student’s total marks only if the student has passed the examination, otherwise not.

#include <stdio.h>
int main()
{
    int a, b, c, d, e, x;
    printf("Enter the marks of five subjects\n");
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
    x = ((a + b + c + d + e) * 100) / 500;
    if (x >= 33)
    {
        printf("PASSED\n");
        int z;
        z = a + b + c + d + e;
        printf("\nStudent total marks is %d", z);
    }
    else
    {
        printf("FAILED");
    }
}