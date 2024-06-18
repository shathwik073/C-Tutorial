#include <stdio.h>

int Sum(int a, int b);

int main()
{
    int x;
    x = Sum(2, 48);
    printf("The sum is %d\n", x);

    return 0;
}

int Sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}