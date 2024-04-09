//The side of a square is input through the keyboard. Write a program to calculate the perimeter of a square. Print the result on output screen.


#include<stdio.h>
int main()
{
    int L,M;
    printf("Enter the side of a square\n");
    scanf("%d",&L);
    M=4*L;
    printf("\nThe perimeter of the square is %d",M);
}