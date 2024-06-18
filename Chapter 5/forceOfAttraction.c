#include <stdio.h>

float Force(int mass);

int main()
{
    float mass;
    printf("Enter the mass of the object\n");
    scanf("%f", &mass);

    printf("The force of attraction exerted towards earth is %f N\n", Force(mass));

    return 0;
}

float Force(int mass)
{
    return mass * 9.8;
}