#include <stdio.h>

void Change(int a);

int main()
{
    int b = 43;
    printf("The value of b before change is %d\n", b);
    Change(b);
    printf("The value of b after change is %d\n", b);

    return 0;
}

void Change(int b)
{
    b = 77;
}