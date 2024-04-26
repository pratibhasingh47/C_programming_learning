// Write a program to swap values of two int variables without using third variable. For example if a=5 and b=10, then output should be: a= 10 and b=5.

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the value\n");
    scanf("%d\n%d", &x, &y);

    printf("After swapping\nx=%d\ny=%d", y, x);
}
