#include <stdio.h>

int main()
{
    int num, i = 2, prime = 1;
    printf("Enter the number\n");
    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }
    if (prime == 0)
    {
        printf("This is not a prime number\n");
    }
    else
    {
        printf("This is prime number\n");
    }

    return 0;
}