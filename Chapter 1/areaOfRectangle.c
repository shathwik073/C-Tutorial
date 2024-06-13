#include <stdio.h>

int main()
{
    float length, width, area;
    printf("Enter the length\n");
    scanf("%f", &length);
    printf("Enter the width\n");
    scanf("%f", &width);
    area = length * width;
    printf("The area of length %f and width %f of rectangle is %f sq. units\n", length, width, area);

    return 0;
}