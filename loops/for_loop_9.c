// WAP to print first 10 odd natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n >= 0)
    {
        printf("%d\n", n);
        n = n - 1;
    }
}