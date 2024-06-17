#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, userNumber, nGuess = 1;
    srand(time(0));
    randomNumber = rand() % 100 + 1;
    // printf("%d\n", randomNumber);
    do
    {
        printf("Enter the number(1 to 100)\n");
        scanf("%d", &userNumber);

        if (userNumber > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (userNumber < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congratulations!!! Your number %d is right:)\nYou guessed in %d attempts.\n", randomNumber, nGuess);
            break;
        }
        nGuess++;

    } while (userNumber != randomNumber);

    return 0;
}