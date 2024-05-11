// Program to check whether a year is a leap year or not. Using switch statement

#include <stdio.h>
int main()
{
    char x = 'N';
    switch (x)
    {
    case 'N':
    {
        printf("Enter the year\n");
        int z;
        scanf("%d", &z);
        if (z % 4 == 0)
        {
            printf("LEAP YEAR");
        }
        else
        {
            printf("NOT A LEAP YEAR");
        }
        break;
    }
    }
}