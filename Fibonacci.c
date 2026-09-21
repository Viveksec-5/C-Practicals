#include <stdio.h>
//write a function to print nth term of Fibonacci sequence.
int fib(int n);
int main()
{
    int n;
    printf("%d\n", fib(6));

    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {

            return 1;
        }
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibn = fibNm1 + fibNm2;

    return fibn;
}