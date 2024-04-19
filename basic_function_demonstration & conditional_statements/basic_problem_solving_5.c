#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("POSITIVE");
    }
    else if (a == 0)
    {
        printf("ZERO");
    }
    else if (a < 0)
    {
        printf("NEGATIVE");
    }
}