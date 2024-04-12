//Ask the user to enter a value. Write a program to determine if the value is less than ten or greater than ten. Print messages accordingly.

#include<stdio.h>
int main()
{
    int l;
    printf("Enter any value\n");
    scanf("\n%d",&l);
    if(l<=10)
    {
        printf("\nValue is less than 10");
    }
    else{
        printf("\nValue is greater than 10");

    }
}