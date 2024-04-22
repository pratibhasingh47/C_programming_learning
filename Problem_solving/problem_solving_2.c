#include<stdio.h>
int main()
{
    int a,b,c,d,e,x;
    printf("Enter the marks of five subjects\n");
    scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
    x= ((a+b+c+d+e)*100)/500;
    if (x>=33)
    {
        printf("PASSED\n");
        int z;
        z=a+b+c+d+e;
        printf("\nStudent total marks is %d",z);
    }
    else{
        printf("FAILED");
    }
    
}