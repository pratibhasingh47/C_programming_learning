//The length and breadth of a rectangle is input through the keyboard. Write a program to calculate the perimeter of a rectangle. Print the result on output screen.


#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the lenght and the breath of the rectangle\n");
    scanf("%d",&x);
    scanf("\n%d",&y);
    z=2*(x+y);
    printf("\nThe perimeter of the rectangle is %d",z);
}