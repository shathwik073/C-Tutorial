#include <stdio.h>
#include <math.h>

int main()
{
    int a = 6, b = 49, z;
    z = a * b; // Valid
    // a * b = z;  // Invalid
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of z is %d\n", z);
    printf("%d divided by %d leaves a remainder of %d\n", b, a, b % a);
    printf("%d divided by %d leaves a remainder of %d\n", -b, a, -b % a);

    // No operator is assumed to be present
    // printf("The value of 4 * 5 is %d\n", (4)(5)); >>> Invalid
    printf("The value of 4 * 5 is %d\n", (4) * (5)); // >>> Valid

    // There is no operator to perform exponentiation in C
    // printf("The value of 4 to the power 5 is %d\n", 4 ^ 5); // Will not render 4 to the power 5
    printf("The value of 4 to the power 5 is %f\n", pow(4, 5));

    // Type conversion
    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("The vale of 6.1 + 5.6 is %f\n", 6.1 + 5.6);

    return 0;
}