#include <stdio.h>

int main()
{
    // Priority         Operator
    // 1st          >>> *, /, %
    // 2nd          >>> +, -
    // 3rd          >>> =
    printf("%d\n", 3 * 2 - 8 * 3);
    printf("%d\n", 8 * 3 / 3 * 2);
    printf("%d\n", 8 * (3 / 3) * 2);

    return 0;
}