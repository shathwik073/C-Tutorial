#include <stdio.h>

int main()
{
    int a, b, sum;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}