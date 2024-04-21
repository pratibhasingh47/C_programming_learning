#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value\n");
    scanf("\n%d", &a);
    b = a % 10;

    printf("\nThe unit digit is %d", b);
}