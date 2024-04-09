//The radius of a circle is input through the keyboard. Write a program to calculate the circumference of a circle. Print the result on output screen.
#include<stdio.h>
int main()
{
    float x,a=3.14;
    int r;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    x=2*a*r;
    printf("\nThe area of the circle is %f",x);
}