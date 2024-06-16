#include <stdio.h>

int main()
{
    int age, vipPass = 0;
    printf("Enter your age\n");
    scanf("%d", &age);
    vipPass = 0;

    if (age <= 70 && age >= 18 || vipPass == 1)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You not can drive\n");
    }
    if (age == 50)
    {
        printf("Half Century!!\n");
    }
    return 0;
}