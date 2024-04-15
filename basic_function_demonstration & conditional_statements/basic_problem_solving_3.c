#include <stdio.h>
int main()
{
    int a;
    printf("Enter the no.\n");
    scanf("%d", &a);
    if (a % 3 == 0 && a % 2 == 0)
    {
        printf("\nNO. IS DIVISIBLE BY 2 AND 3");
    }
    else
    {
        printf("\nNOT DIVISIBLE BY 2 AND 3");
    }
}