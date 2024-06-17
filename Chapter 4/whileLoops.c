#include <stdio.h>

float main()
{
    int i = 1, a;
    printf("Enter the number\n");
    scanf("%d", &a);

    while (i <= a)
    {
        printf("%d\n", i);
        i++;
    }
    int j = 2;
    printf("j++ >>> %d\n", j++);
    printf("++j >>> %d\n", ++j);
    printf("j-- >>> %d\n", j--);
    printf("--j >>> %d\n", --j);

    return 0;
}