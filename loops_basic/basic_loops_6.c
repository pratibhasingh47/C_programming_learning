// WAP to print ‘10’ natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int n = 10, i;
    for (i = n; i <= n; i--)
    {
        printf("%d\n", i);
        if (i <= 0)
            break;
    }
}