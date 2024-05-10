#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Select from the following options\n1. addition\n2. subtraction\n3. multiplication\n4. division\n5. exit programe\n");
    scanf("%d",&x);
    if (x==5)
    {
        printf("EXIT");
    }
    else {
    printf("Enter the values");
    scanf("%d\n%d",&a,&b);
    switch (x)
    {
    case 1:{
        int add;
        add=a+b;
        printf("add is %d",add);
        break;
    }
    case 2:{
        int subt;
        subt =a-b;
        printf("Subt is %d",subt);
        break;
    }
    case 3:{
        int mlt;
        mlt=a*b;
        printf("multiplication is %d",mlt);
        break;
    }
    case 4:{
        int div;
        div = a/b;
        printf("division is %d",div);
        break;
    }
    }
    }
}