//WAP to print table of 2.

#include <stdio.h>
int main()
{
    int x = 20, i;
    for (i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}