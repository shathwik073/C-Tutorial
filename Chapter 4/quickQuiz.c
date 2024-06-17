#include <stdio.h>

int main()
{
    int i = 1, range;
    printf("Enter the number\n");
    scanf("%d", &range);

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= range);

    return 0;
}