#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, x, y;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    printf("Enter the third number\n");
    scanf("%d", &num3);
    printf("Enter the fourth number\n");
    scanf("%d", &num4);

    if (num1 > num2)
    {
        x = num1;
    }
    else
    {
        x = num2;
    }
    if (num3 > num4)
    {
        y = num3;
    }
    else
    {
        y = num4;
    }
    if (x > y)
    {
        printf("%d\n", x);
    }
    else
    {
        printf("%d\n", y);
    }

    return 0;
}