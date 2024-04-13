//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage. 

#include <stdio.h>
int main()
{
   float CP, SP;
   printf("Enter CP & SP\n");
   scanf("\n%f", &CP);
   scanf("\n%f", &SP);

   float profit, loss;
   profit = (SP - CP) / CP * 100;
   loss = (CP - SP) / CP * 100;

   if (CP > SP)
   {
      printf("%f", loss);
   }
   else
   {
      printf("%f", profit);
   }
}