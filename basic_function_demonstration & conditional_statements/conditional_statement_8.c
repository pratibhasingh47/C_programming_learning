//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
int main()
{
    int x;
    scanf("\n%d",&x);
    if(x>0)
    {
        printf("\nThe roots of given quadratic equation is real & distinct");
    }
    else if (x==0)
    {
        printf("\nThe roots of given quadratic equation is real & equal");
    }
    else if (x<0)
    {
        printf("\nThe roots of given quadratic equation is imaginary");
    }
    
    
}