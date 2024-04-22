#include<stdio.h>
void oddeven(int a);
int main()
{
    int a;
    printf("Enter a value\n");
    scanf("\n%d",&a);
    oddeven(a);

}
void oddeven(int a)
{
    if (a%2==0)
    {
        printf("Even");
        if (a%2==0 && a%3==0)
        {
            printf("\nNo. is divisible by both 2 and 3");
        }
        
    }
    else{
        printf("Odd");
        if (a%5==0)
        {
            printf("\nNo. is divisible by 5");
        }
        
    }
    
}
