#include <stdio.h>

int main()
{
    int i = 0, factorial = 1, num;
    printf("Enter the number\n");
    scanf("%d", &num);

    while (i < num)
    {
        factorial += factorial * i;
        i++;
    }
    printf("%d\n", factorial);

    return 0;
}