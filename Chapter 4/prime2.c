#include <stdio.h>

int main()
{
    int num, i = 2, prime = 1;
    printf("Enter the number\n");
    scanf("%d", &num);

    do
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < num);
    if (prime == 0 && num != 2)
    {
        printf("This is not a prime number\n");
    }
    else
    {
        printf("This is prime number\n");
    }

    return 0;
}