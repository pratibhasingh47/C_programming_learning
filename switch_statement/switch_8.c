// Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.

#include <stdio.h>
int main()
{
    int n;
    printf("To convert:-\n1.Positive to negative\n2.Negative to positive\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        printf("Enter the no.\n");
        int x, y;
        scanf("%d", &x);
        y = -1 * x;
        printf("%d", y);
        break;
    }
    case 2:
    {
        printf("Enter the no.\n");
        int l, m;
        scanf("%d", &l);
        m = -1 * l;
        printf("%d", m);
        break;
    }
    }
}