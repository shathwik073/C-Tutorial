#include <stdio.h>

int main()
{
    int sum = 0, i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);

    return 0;
}