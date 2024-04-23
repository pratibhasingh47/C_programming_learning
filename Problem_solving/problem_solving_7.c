#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the sides of triangle\n");
    scanf("\n%d\n%d\n%d",&x,&y,&z);
    if (x==y==z)
    {
        printf("The triangle is equilateral");
    }
    else if((x==y)||(y==z)||(x==z))
    {
        printf("The triangle is isosceles");
    }
    else{printf("The triangle is scalene");}
}