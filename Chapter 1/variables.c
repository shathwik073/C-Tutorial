#include <stdio.h>

int main()
{
    int a = 4, z = 2;
    int b = 3.5;   // Will only consider 3
    float c = 3.5; // It contains 3.5
    char d = 'Z';
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %f\n", c);
    printf("The value of d is %c\n", d);
    printf("The sum of %d and %d is %d\n", a, z, a + z);

    return 0;
}