#include <stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    GoodMorning();
    GoodAfternoon();
    GoodNight();
    printf("\n\n");
    int i = 1;
    do
    {
        GoodMorning();
        i++;
    } while (i <= 10);

    return 0;
}
void GoodMorning()
{
    printf("Good Morning!!!\n");
    GoodAfternoon();
}
void GoodAfternoon()
{
    printf("Good Afternoon!!\n");
}
void GoodNight()
{
    printf("Good Night!\n");
}