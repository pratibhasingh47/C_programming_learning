//Write a program to do the following:Calculate area of a square & Calculate perimeter of a square



#include<stdio.h>
int area(int a);
int perimeter(int a);

int main()
{
    int a,b,c;
    printf("\nEnter the side of the square");
    scanf("\n%d",&a);

    b=area( a);
    c=perimeter(a);

    printf("\nThe area of the square is %d",b);
    printf("\nThe perimeter of the square is %d",c);
}
int area(int a)
{
    int ar;
    ar=a*a;
    return ar;
}
int perimeter(int a)
{
    int pr;
    pr=4*a;
    return pr;
}