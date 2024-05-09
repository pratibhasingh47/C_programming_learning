//Write a program to make the last digit of a number stored in a variable as zero.  (Example - if num=5678 then make it num=5670) 

#include <stdio.h>
int main()
{
    int n, y, z;
    printf("Enter the value\n");
    scanf("%d", &n);
    y = n % 10;
    z = n - y;
    printf("\nThe value is %d", z);
}