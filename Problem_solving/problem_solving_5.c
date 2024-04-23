// Write a program to check whether a year is a leap year or not

#include <stdio.h>
int main()
{
    int l;
    printf("Enter the year\n");
    scanf("\n%d", &l);
    if (l % 4 == 0)
    {
        printf("\nIt is a leap year");
    }
    else
    {
        printf("\nIt is not a leap year");
    }
}
