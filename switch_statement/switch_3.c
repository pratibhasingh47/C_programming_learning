/*Using Switch statement, write a program that displays the following menu for the food items available to take order from the customer:
1: Burger
2: French Fries
3: Pizza
4: Sandwiches
5: Enter some valid choice
The program inputs the type of food and quantity. It finally displays the total charges for the order according to following criteria:
Burger = Rs. 200
French Fries= Rs. 50
Pizza= Rs. 500
Sandwiches= Rs. 150
For example: Initially your program should print the menu. When user enters its choice, say 1 for burger, then it should ask for the quantity of burgers. When user enters the quality, then depending on the quantity it should display total charges.*/


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