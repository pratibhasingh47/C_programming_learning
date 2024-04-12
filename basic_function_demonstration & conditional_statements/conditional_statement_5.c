//Write a program to check whether a number is positive or negative. For example, if the user enters 8, it should print: Positive number.



#include<stdio.h>
int main()
{
    int x;
    printf("Enter any value\n");
    scanf("\n%d",&x);
    if(x>=0)
    {
        printf("\nThe number is positive");
    }
    else
    {
        printf("\nThe number is negative");
    }
    
}