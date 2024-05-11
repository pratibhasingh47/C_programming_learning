/*Convert the following if-else-if construct into switch case:
if(var == 1) System.out.println("good");
else if(var == 2) System.out.println("better");
else if(var == 3) System.out.println("best");
else
System.out.println("invalid"); */


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        printf("GOOD");
        break;
    }
    case 2:
    {
        printf("BETTER");
        break;
    }
    case 3:
    {
        printf("BEST");
        break;
    }
    default:
    {
        printf("INVAILD");
    }
    }
}