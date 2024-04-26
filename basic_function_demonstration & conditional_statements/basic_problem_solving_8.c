// Write a program to swap values of two int variables . For example if a=5 and b=10, then output should be: a= 10 and b=5.
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
