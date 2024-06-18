#include <stdio.h>

int SumOfN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + SumOfN(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Sum is %d\n", SumOfN(3));

    return 0;
}