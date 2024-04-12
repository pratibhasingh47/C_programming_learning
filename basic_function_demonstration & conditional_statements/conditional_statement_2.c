/*Two numbers are input through the keyboard. Also, ask the user to enter a choice. Write a program to do the following:
Print sum of two numbers if user enters choice as 1.
Print difference of two numbers if user enters choice as 2.
Print product of two numbers if user enters choice as 3.
Print quotient if user enters choice as 4.
Print NO OPERATION if user enters choice as 0*/



#include <stdio.h>
int add(int a, int b);
int subt(int a, int b);
int mult(int a, int b);
int div(int a, int b);
int main()
{
    int a, b;
    printf("Enter the numbers\n");
    scanf("\n%d", &a);
    scanf("\n%d", &b);
    int n;
    printf("Enter the choice\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        int sum;
        sum = add(a, b);
        printf("%d", sum);
        break;
    }

    case 2:
    {
        int sub;
        sub = subt(a, b);
        printf("%d", sub);
        break;
    }

    case 3:
    {
        int mlt;
        mlt = mult(a, b);
        printf("%d", mlt);
        break;
    }

    case 4:
    {
        int division;
        division = div(a, b);
        printf("%d", division);
        break;
    }

    case 0:
    {
        printf("NO OPERATION");
        break;
    }
    }
}
int add(int a, int b)
{
    int ad;
    ad = a + b;
    return ad;
}
int subt(int a, int b)
{
    int sb;
    sb = a - b;
    return sb;
}
int mult(int a, int b)
{
    int ml;
    ml = a * b;
    return ml;
}
int div(int a, int b)
{
    int dv;
    dv = a / b;
    return dv;
}