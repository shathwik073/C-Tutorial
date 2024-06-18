#include <stdio.h>

int Factorial(int x)
{
    int fact;
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        fact = x * Factorial(x - 1);
        return fact;
    }
}

int main()
{
    printf("%d\n", Factorial(5));

    return 0;
}