//WAP to print ‘N’ natural numbers in reverse order


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