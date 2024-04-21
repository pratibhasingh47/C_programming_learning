#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value\n");
    scanf("\n%d", &a);
    scanf("\n%d", &b);
    c = a;
    a = b;
    b = c;
    printf("%d\n%d", a, b);
}