//Aman’s basic salary is input through the keyboard. His dearness allowance is 50% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross (total) salary. Print the salary on screen.


#include<stdio.h>
int main()
{
    int a;
    printf("Aman's basic salary\n");
    scanf("%d",&a);
    int b;
    b=12*a+0.5*a+0.2*a;
    printf("\nAman's total gross salary is %d",b);
}