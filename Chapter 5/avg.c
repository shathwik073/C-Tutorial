#include <stdio.h>

int AvgOf3(int a, int b, int c);

int main()
{
    printf("The average of 20, 30, 100 is %d\n", AvgOf3(20, 30, 100));

    return 0;
}

int AvgOf3(int a, int b, int c)
{
    return (a + b + c) / 3;
}