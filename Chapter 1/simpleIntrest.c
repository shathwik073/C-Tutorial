#include <stdio.h>

int main()
{
    int principle = 100, rate = 5, years = 3;
    int simpleInterest = (principle * rate * years) / 100;
    printf("The simple interest is %d\n", simpleInterest);

    return 0;
}