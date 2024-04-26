#include<stdio.h>
int main()
{
    float a,b,c,x,y,z,l,m,n;
    printf("Enter the no. of units\n");
    scanf("\n%f",&a);
    if (a<=50)
    {
        b=a*0.50;
        float b1;
        b1=b*0.2+b;
        printf("\nTHE BILL IS %f",b1);
    }
    else if (a<=150)
    {
        c=a-50;
        x=(c*0.75)+(50*0.50);
        float x1;
        x1=0.2*x+x;
        printf("\nTHE BILL IS %f",x1);
    }
    else if (a<=250)
    {
        y=a-150;
        z=(50*0.50)+(100*0.75)+(y*1.20);
        float z1;
        z1=0.2*z+z;
        printf("\nTHE BILL IS %f",z1);
    }
    else if (a>250)
    {
        m=a-250;
        n=(0.50*50)+(100*0.75)+(100*1.20)+(1.50*m);
        float n1;
        n1=0.2*n+n;
        printf("\nTHE BILL IS %f",n1);
    }

}