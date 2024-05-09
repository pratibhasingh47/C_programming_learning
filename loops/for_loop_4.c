//Write a program to calculate factorial of a number

#include <stdio.h>
int factorial(int n);
int main()
{
    int n, i;
    int ft;
    scanf("%d", &n);
    ft = factorial(n);
    printf("\n%d", ft);
}
int factorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}