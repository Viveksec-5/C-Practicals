// Write a programme to cheak if the entered year is leap year or not.
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        printf("The year is Leap year. \n");
    }
    else
    {
        printf("The year is not a Leap year. \n");
    }
    return 0;
}