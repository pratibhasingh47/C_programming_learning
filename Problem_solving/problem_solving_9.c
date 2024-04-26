#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value\n");
    scanf("\n%d",&x);
    y=x%10;
    printf("\nOnce digit is%d",y);
    int z;
    z=(x%100)-y;
    int a;
    a=z/10;
    printf("\nTenth place is %d",a);
    if (y==a)
    {
        printf("\nThe digits at both the places is same");
    }
    else{printf("\ndigits are not same");}
    

}