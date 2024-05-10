/*Write a menu driven program with the following options:
Check whether a given set of three numbers are lengths of an isosceles triangle or not
Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
Check whether a given set of three numbers are equilateral triangle or not
Exit */

#include <stdio.h>
int main()
{
    int x, y, z;
    printf("\nTo check:-\n1. Isoceles triangle\n2. Right angle triangle\n3.Equilateral triangle\n");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {

        printf("Enter the sides of triangle\n");
        scanf("%d\n%d\n%d", &x, &y, &z);
        if (x == y != z || y == z != x || z == x != y)
        {
            printf("\nsides are of isoceles triangle");
        }
        else
        {
            printf("EXIT");
        }
        break;
    }
    case 2:
    {

        printf("Enter the sides of triangle\n");
        scanf("%d\n%d\n%d", &x, &y, &z);
        if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
        {
            printf("\nsides are of right angled triangle");
        }
        else
        {
            printf("EXIT");
        }
        break;
    }
    case 3:
    {
        printf("Enter the sides of triangle\n");
        scanf("%d\n%d\n%d", &x, &y, &z);
        if (x == y && y == z && z == x)
        {
            printf("\nsides are of equilateral triangle");
        }
        else
        {
            printf("EXIT");
        }
        break;
    }
    }
}