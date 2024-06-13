#include <stdio.h>

int main()
{
    float pi = 3.14, radius, height, volume;
    printf("Enter the radius\n");
    scanf("%f", &radius);
    printf("Enter the height\n");
    scanf("%f", &height);
    volume = pi * radius * radius * height;
    printf("The volume of cylinder of radius %f and height %f is %f sq. units\n", radius, height, volume);

    return 0;
}