#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("%d\n", sum);

    return 0;
}