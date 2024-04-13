// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not. 

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a+b>c)
    {
        printf("The triangle is valid");

    }
    else{
        printf("The triangle is not valid");
    }
}