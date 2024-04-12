/*The distance between two cities (in kms) is input through the keyboard. Write a program to do the following:
Convert the distance in centimeter
Convert the distance in millimeters
Convert the distance in inches*/



#include<stdio.h>
int centimeter(int x);
int millimeter(int x);
float inches(int x);
int main()
{
    int x,a,b;
    float c;
    printf("Enter the distance\n");
    scanf("\n%d",&x);
    a=centimeter(x);
    b=millimeter(x);
    c=inches(x);

    printf("distance in cm is %d\ndistance in mm is %d\n distance in inches is %f",a,b,c);

}
int centimeter(int x)
{
    int cm;
    cm=1000*100*x;
    return cm;
}
int millimeter(int x)
{
    int mm;
    mm=1000*100*10*x;
    return mm;
}
float inches(int x)
{
    float ic;
    ic=39370.1*x;
    return ic;
}