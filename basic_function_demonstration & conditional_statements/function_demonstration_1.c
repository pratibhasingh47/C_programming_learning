//Write a program to do the following:Calculate area of a rectangle & Calculate perimeter of a rectangle


#include <stdio.h>
int area(int a, int b);
int perimeter(int a, int b);
int main()
{
    int a, b, c, d;
    printf("Enter the lenght and the breath of the rectangle\n");
    scanf("\n%d", &a);
    scanf("\n%d", &b);

    c = area(a, b);
    d = perimeter(a, b);
    printf("\nThe area of rectangle is %d", c);
    printf("\nThe perimeter of triangle is %d", d);
}
int area(int a, int b)
{
    int ar;
    ar = a * b;
    return ar;
}
int perimeter(int a, int b)
{
    int pr;
    pr = 2 * (a + b);
    return pr;
}