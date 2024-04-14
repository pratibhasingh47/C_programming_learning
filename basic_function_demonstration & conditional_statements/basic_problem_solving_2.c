#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    printf("Enter the no.\n");
    scanf("%f\n%f\n%f\n%f\n%f", &a, &b, &c, &d, &e);
    if ((a + b + c + d + e) / 5 >= 33)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}