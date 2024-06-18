#include <stdio.h>

float CToF(float c)
{
    return (c * 1.8) + 32;
}

int main()
{
    int c = 41;
    printf("%d of celsius of temperature in fahrenheit is %f", c, CToF(c));

    return 0;
}