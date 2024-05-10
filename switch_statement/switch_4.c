// Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the week no.\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        printf("MONDAY\nYour attitude determines your behaviour");
        break;
    }
    case 2:
    {
        printf("TUESDAY\nMake your best decision today");
        break;
    }
    case 3:
    {
        printf("WEDNESDAY\nAs you grow you changes,as you changes you grow");
        break;
    }
    case 4:
    {
        printf("THURSDAY\nSpeed does not matter if you have a constant phase");
        break;
    }
    case 5:
    {
        printf("FRIDAY\nA new day,A new blessing,A new hope");
        break;
    }
    case 6:
    {
        printf("SATURDAY\nIt always seems impossible until its done");
        break;
    }
    case 7:
    {
        printf("SUNDAY\nRest buddy!!!");
        break;
    }

    default:
    {
        printf("EXIT");
        break;
    }
    }
}