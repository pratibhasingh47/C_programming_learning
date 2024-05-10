#include <stdio.h>
int main()
{
    int n;
    printf("Select from the followig food items:-\n1.Burger - 200Rs.\n2.French Fries - 50Rs.\n3.Pizza - 500Rs.\n4.Sandwiches - 150Rs.\n5.Enter some valid choice\n");
    scanf("%d", &n);
    if (n == 5)
    {
        printf("EXIT MENU");
    }
    else
    {
        switch (n)
        {
        case 1:
        {
            printf("Enter the no. of quantity\n");
            int p;
            scanf("%d", &p);
            int t;
            t = p * 200;
            printf("Total cost is %d", t);
            break;
        }
        case 2:
        {
            printf("Enter the no. of quantity\n");
            int x;
            scanf("%d", &x);
            int t;
            t = 50 * x;
            printf("Total cost is %d", t);
            break;
        }
        case 3:
        {
            printf("Enter the no. of quantity\n");
            int y;
            scanf("%d", &y);
            int t;
            t = y * 500;
            printf("Total cost is %d", t);
            break;
        }
        case 4:
        {
            printf("Enter the no. of quantity\n");
            int z;
            scanf("%d", &z);
            int t;
            t = z * 150;
            printf("Total cost is %d", t);
            break;
        }
        }
    }
}