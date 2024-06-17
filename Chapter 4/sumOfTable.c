#include <stdio.h>

int main()
{
    int i = 1, sum = 0, num;
    printf("Enter the number\n");
    scanf("%d", &num);

    do
    {
        sum += num * i;
        i++;
    } while (i <= 10);
    printf("%d\n", sum);

    return 0;
}