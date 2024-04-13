//Write a program to check whether a given number is divisible by 5 or not. 

#include<stdio.h>
int main()
{
    int x;
    printf("Enter any value\n");
    scanf("\n%d",&x);
    if(x%5==0)
    {
        printf("\nThe no. is divisible by 5");

    }
    else {
        printf("\nThe no. is not divisible by 5");
    }
}