/*Write a program to do the following:
To add two numbers
To subtract two numbers
To multiply two numbers
To divide two numbers*/



#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int main()
{
    int a,b,x,y,z,v;
    printf("Enter the numbers\n");
    scanf("\n%d",&a);
    scanf("\n%d",&b);
    x=add(a,b);
    y=sub(a,b);
    z=mul(a,b);
    v=div(a,b);

    printf("the addition is %d\n the subttraction is %d\n the multiplication is %d\n the division is %d",x,y,z,v);


}
int add(int a, int b)
{
    int ad;
    ad=a+b;
    return ad;
}
int sub(int a, int b)
{
    int sb;
    sb=a-b;
    return sb;
}
int mul(int a, int b)
{
    int ml;
    ml=a*b;
    return ml;
}
int div(int a, int b)
{
    int dv;
    dv=a/b;
    return dv;
}