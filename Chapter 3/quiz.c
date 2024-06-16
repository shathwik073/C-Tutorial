#include <stdio.h>

int main()
{
    int marks;
    char grade = '_';
    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (90 <= marks && marks >= 100)
    {
        grade = 'A';
    }
    else if (80 <= marks)
    {
        grade = 'B';
    }
    else if (70 <= marks)
    {
        grade = 'C';
    }
    else if (60 <= marks)
    {
        grade = 'D';
    }
    else if (marks < 60 && marks > 0)
    {
        grade = 'E';
    }
    printf("Your grade is %c\n", grade);

    return 0;
}