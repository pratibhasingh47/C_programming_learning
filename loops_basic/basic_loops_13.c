// WAP to print square of first 10 natural numbers.

#include <stdio.h>
int main()
{
    int x = 10, i;
    for (i = 1; i <= x; i++)
    {
        int v;
        v = i * i;
        printf("%d\n", v);
    }
}