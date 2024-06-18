#include <stdio.h>

int Fibonacci();

int main()
{
    printf("%d\n", Fibonacci(10));

    return 0;
}

int Fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}