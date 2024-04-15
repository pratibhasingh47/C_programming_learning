//Write a program to check whether a given number is divisible by 7 or divisible by 3. 

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the no.\n");
    scanf("%d", &a);
    if (a % 3 == 0 || a % 7 == 0)
    {
        printf("\nNO. IS DIVISIBLE BY 7 OR 3");
    }
    else
    {
        printf("\nNOT DIVISIBLE BY 7 OR 3");
    }
}