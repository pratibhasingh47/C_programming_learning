#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch (n)
    {
    case 1:{
        printf("GOOD");
        break;
    }
    case 2:{
        printf("BETTER");
        break;
    }
    case 3:{
        printf("BEST");
        break;
    }
    default:
       {printf("INVAILD");}
    }
}