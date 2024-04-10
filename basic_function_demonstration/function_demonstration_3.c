//Write a program to do the following: Calculate area of a circle & Calculate circumference of a circle.



#include <stdio.h>
int area(int r);
int circumference(int r);
int main()
{
    int r, a, c;
    printf("Enter the radius of the circle\n");
    scanf("\n%d", &r);

    a = area(r);
    c = circumference(r);

    printf("\nThe area of circle is %d", a);
    printf("\nThe circumference of the circle is %d", c);
}
int area(int r)
{
    int ar;
    ar = r * r * 3.14;
    return ar;
}
int circumference(int r)
{
    int cr;
    cr = 3.14 * 2 * r;
    return cr;
}