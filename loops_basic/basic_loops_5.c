#include<stdio.h>
int main()
{
    int n,y,z;
    printf("Enter the value\n");
    scanf("%d",&n);
    y=n%10;
    z=n-y;
    printf("\nThe value is %d",z);
}