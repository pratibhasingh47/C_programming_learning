/*WAP to sum ‘N’ number of pairs. Value of N will be entered by the user. For example, if user enters 3, then the program should ask values for three 3 pairs such as:
2 and 4 sum is 6
4 and 5 sum is 9
10 and 20 sum is 30.
*/

#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int x, y;
        printf("\nEnter the values");
        scanf("\n%d\n%d", &x, &y);
        int sum;
        sum = x + y;
        printf("\nsum is %d", sum);
    }
}