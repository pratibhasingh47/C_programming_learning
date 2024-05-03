// WAP to print N natural numbers. For ex if user enters N= 5, then it should print 1 2 3 4 5.

#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}