/*Assume that the maximum marks that can be obtained by a student in any subject is 100. If the marks obtained by a student in five different subjects are input through the keyboard, write a program to do the following:
Find out total marks obtained by the student
Find out the percentage obtained by the student
Find out the average marks of the student.*/



#include<stdio.h>

int totalmarks(int a, int b, int c , int d, int e);
int percentage(int a, int b, int c,int d,int e);
int average(int a, int b,int c,int d,int e);
int main()
{
    int a,b,c,d,e,tm,pt,ag;
    printf("Enter the marks obtained by student in five subjects");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    scanf("\n%d",&c);
    scanf("\n%d",&d);
    scanf("\n%d",&e);

    tm=totalmarks(a,b,c,d,e);
    pt=percentage(a,b,c,d,e);
    ag=average(a,b,c,d,e);

    printf("\nThe total marks obtained by student is %d",tm);
    printf("\nThe percentage is %d",pt);
    printf("\nAverage number is %d",ag);
}
int totalmarks(int a,int b,int c,int d,int e)
{
int x;
x=a+b+c+d+e;
return x;
}
int percentage(int a, int b ,int c, int d, int e)
{
    int p;
    p=(a+b+c+d+e)/5;
    return p;
}
int average(int a,int b,int c,int d, int e)
{
    int aa;
    aa=(a+b+c+d+e)/5;
    return aa;
}