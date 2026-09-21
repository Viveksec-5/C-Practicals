#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 45, 69, 9};
    int max = arr[0];
    int n = 10;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("largest number in array: %d \n", max);

    return 0;
}