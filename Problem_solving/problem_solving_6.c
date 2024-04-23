#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if ((a+b>c)||(a+c>b)||(b+c>a))
    {
        printf("The triangle is possible");
    }
    else{printf("The triangle is not possible");}
    
}