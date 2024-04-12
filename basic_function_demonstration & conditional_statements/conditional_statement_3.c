//Ask the user to enter a value between 1 to 100. Write a program to print SUCCESS if the user enters any number between 50 to 100. Otherwise, it should print FAIL.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter any value between 1 to 100\n");
    scanf("\n%d",&x);
    if (x>=50 && x<=100)
    { printf("\nSUCCESS");
    }
    else{
        printf("\nFAIL");
    }
}