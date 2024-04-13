//Write a program to check whether an integer is odd or even.

#include<stdio.h>
int main()
{
    int v;
    printf("Enter any value\n");
    scanf("\n%d",&v);
    if(v%2==0)
    {
        printf("EVEN NO.");
    }
    else{
        printf("ODD NO.");
    }
}