// WAP to find the greatest among the two given numbers. Also, check whether the greatest number is between 500-1000 or not. If yes, then print the value of entered number.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the values\n");
    scanf("%d\n%d", &a, &b);
    if (a > b)
    {
        printf("%d is greater", a);
        if (a >= 500 && a <= 1000)
        {
            printf("Entered no. lies between 500-1000");
        }
    }
    else
    {
        printf("%d is greater", b);
        if (b >= 500 && b <= 1000)
            ;
        printf("Entered no. lies between 500-1000");
    }
}