// WAP to print first 10 even natural numbers.

#include <stdio.h>
int main()
{
    int x = 20, i;
    for (i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}