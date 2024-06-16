#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the alphabet\n");
    scanf("%c", &ch);

    if (ch <= 'a' && 'z' >= ch)
    {
        printf("Lowercase\n");
    }
    else if (ch <= 'A' && 'Z' >= ch)
    {
        printf("Uppercase\n");
    }

    return 0;
}