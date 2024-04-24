// C program to enter week number and print day of week


#include <stdio.h>
int main()
{
    int n;
    printf("Enter the week number\n");
    scanf("\n%d", &n);
    switch (n)
    {
    case 1:
    {
        printf("SUNDAY");
    }
    case 2:
    {
        printf("MONDAY");
        break;
    }
    case 3:
    {
        printf("TUESDAY");
        break;
    }
    case 4:
    {
        printf("WEDNESDAY");
        break;
    }
    case 5:
    {
        printf("THURSDAY");
        break;
    }
    case 6:
    {
        printf("FRIDAY");
        break;
    }
    case 7:
    {
        printf("SATURDAY");
        break;
    }
    default:
    {
        printf("INVALID NO.");
    }
    }
}
