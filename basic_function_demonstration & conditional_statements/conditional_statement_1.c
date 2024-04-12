//Enter two numbers from the keyboard. Write a program to print the value of larger number. [Your program should output only one number which is greater among two. For example, if user enters 3 and 9, output should be: Larger number is 9]

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the values");
    scanf("%d\n%d", &x, &y);
    if (x >= y)
    {
        printf("%d", x);
    }

    else
    {
        printf("%d", y);
    }
}