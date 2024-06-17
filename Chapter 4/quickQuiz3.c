#include <stdio.h>

int main()
{
    int range;
    printf("Enter the number\n");
    scanf("%d", &range);

    do
    {
        if (range == 2)
        {
            break;
        }
        printf("%d\n", range);
        range--;
    } while (0 < range);

    return 0;
}