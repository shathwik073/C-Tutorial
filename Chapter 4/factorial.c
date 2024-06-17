#include <stdio.h>

int main()
{
    int i = 0, factorial = 1, num;
    printf("Enter the number\n");
    scanf("%d", &num);

    // do
    // {
    //     factorial += factorial * i;
    //     i++;
    // } while (i < num);

    for (i; i < num; i++)
    {
        factorial += factorial * i;
    }
    printf("%d\n", factorial);

    return 0;
}