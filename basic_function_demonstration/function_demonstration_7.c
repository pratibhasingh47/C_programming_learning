//Write a program to print N natural numbers. For example, input 6, it should print 1 2 3 4 5 6. Create a function to print these numbers. 

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n>0 && n<=100)
    {
        printf("\n%d",n);
        n=n-1;

    }
    
}