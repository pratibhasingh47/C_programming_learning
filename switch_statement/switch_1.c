// Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter the month no.\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
    {
        printf("No. of days is 31");
        break;
    }
    case 2:
    {
        printf("No. of days is 28");
        break;
    }
    case 3:
    {
        printf("No. of days is 31");
        break;
    }
    case 4:
    {
        printf("No. of days is 30");
        break;
    }
    case 5:
    {
        printf("No. of days is 31");
        break;
    }
    case 6:
    {
        printf("No. of days is 30");
        break;
    }
    case 7:
    {
        printf("No. of days is 31");
        break;
    }
    case 8:
    {
        printf("NO. of days is 31");
        break;
    }
    case 9:
    {
        printf("No. of days is 30");
        break;
    }
    case 10:
    {
        printf("No. of days is 31");
        break;
    }
    case 11:
    {
        printf("No. of days id 30");
        break;
    }
    case 12:
    {
        printf("No. of days is 31");
        break;
    }
    }
}