// Assume price of 1 USD is INR 80. Write a program to take the amount in INR and convert it into USD.
#include <stdio.h>
int main()
{
    float x, a;
    printf("Enter the amount\n");
    scanf("\n%f", &a);
    x = 80 * a;
    printf("\nThe amount in US$ is %f", x);
}
