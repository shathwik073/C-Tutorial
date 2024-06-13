#include <stdio.h>

int main()
{
    float pi = 3.14, radius, area;
    printf("Enter the radius\n");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("The area of circle of radius %f is %f sq. units\n", radius, area);

    return 0;
}