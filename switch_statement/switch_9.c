// C program to find all roots of a quadratic equation using switch case

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("\n1.To check if roots are real & distinct\n2.To check if roots are real & equal\n3.To check if roots are imaginery\n");
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 1:
    {
        if (n > 0)
        {
            printf("The roots are real & distinct");
        }
        else
        {
            printf("The roots are not real & distinct");
        }
        break;
    }
    case 2:
    {
        if (n == 0)
        {
            printf("The roots are real & equal");
        }
        else
        {
            printf("The roots are not real & equal");
        }

        break;
    }
    case 3:
    {
        if (n < 0)
        {
            printf("The roots are imaginery");
        }
        else
        {
            printf("The roots are not imaginery");
        }
        break;
    }
    default:
        break;
    }
}