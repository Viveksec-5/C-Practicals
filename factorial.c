// write a programe to calculate the factorial of given number.
#include <stdio.h>
int main()
{
    int product = 1, n;
    printf("enter a number: \n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("this is a negative number \n");
    }

    else
    {

        for (int i = 1; i <= n; i++)
        {
            product = product * i;
        }
        printf("The factorial of this number is %d \n", product);
    }

    return 0;
}