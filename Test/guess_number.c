#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;

    // Initialization of random number generator
    srand((unsigned) time(&t));

    // get the random number
    int randomNumber = rand()%21;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n\n");

    int guess; // entered by the console
    int ans = randomNumber; // set the answer to ans variable
    for (int trial = 5; trial > 0; trial--)
    {
        printf("You have %d tries left.", trial);
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if (guess == ans) {
            printf("\nCongratulations. You guessed it!\n");
            break;
        } else if (ans < guess) {
            printf("\nSorry, %d is wrong.\n My number is less than that\n",guess);
            continue;
        } else if (ans > guess) {
            printf("\nSorry, %d is wrong.\n My number is greater than that\n",guess);
            continue;
        }
        printf("\nYou have used all five trials, The answer was %d.", ans);
    }
    return 0;
}
