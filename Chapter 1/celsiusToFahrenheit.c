#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in celsius\n");
    scanf("%f", &celsius);
    fahrenheit = 1.8 * celsius + 32;
    printf("%f celsius of temperature in fahrenheit is %f\n", celsius, fahrenheit);

    return 0;
}