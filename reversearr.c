#include <stdio.h>
void reverse(int arr[], int n);
void printarr(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr, 10);
    printarr(arr, 10);
    return 0;
}
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secondval = arr[n - i - 1];
        arr[i] = secondval;
        arr[n - i - 1] = firstval;
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
}