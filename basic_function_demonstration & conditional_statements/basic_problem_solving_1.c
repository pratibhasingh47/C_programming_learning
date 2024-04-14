//WAP to find the greatest among the three given numbers.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d", a);
    }
    else if (b > a && b > c)
    {
        printf("%d", b);
    }
    else if (c > a && c > b)
    {
        printf("%d", c);
    }
}