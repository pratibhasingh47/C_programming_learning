// WAP to print first 10 odd natural numbers.

#include <stdio.h>
int main()
{
    int x = 20, i;
    for (i = x; i <= x; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        if (i == 0)
        {
            break;
        }
    }
}