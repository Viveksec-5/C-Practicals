#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
    int x = 5, y = 8;
    _swap(&x, &y);
    printf("x = %d and y = %d\n", x, y);

    return 0;
}
// call by refrence
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
