#include <stdio.h>

int main()
{
    int math, phy, che;
    printf("Enter your marks in mathematics\n");
    scanf("%d", &math);

    printf("Enter your marks in physics\n");
    scanf("%d", &phy);

    printf("Enter your marks in chemistry\n");
    scanf("%d", &che);

    if (math + phy + che / 3 < 40)
    {
        printf("You are fail\n");
    }
    else if (math < 33 || phy < 33 || che < 33)
    {
        printf("you are fail\n");
    }
    else
    {
        printf("Your pass!\n");
    }

    return 0;
}