// Assume that the maximum marks that can be obtained by a student in any subject is 100. If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the percentage obtained by the student. Print the percentage of the student on screen


#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the no. of five subjects\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    scanf("\n%d",&c);
    scanf("\n%d",&d);
    scanf("\n%d",&e);
    int h;
    h=(a+b+c+d+e);
    printf("the aggregate is %d",h);
}