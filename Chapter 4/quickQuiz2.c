#include <stdio.h>

int main()
{
    int range;
    printf("Enter the number\n");
    scanf("%d", &range);

    for (int i = 1; i <= range; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}