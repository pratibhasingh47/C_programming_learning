#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int x, y;
        printf("\nEnter the values");
        scanf("\n%d\n%d", &x, &y);
        int sum;
        sum = x + y;
        printf("\nsum is %d", sum);
    }
}