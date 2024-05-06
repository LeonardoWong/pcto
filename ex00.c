#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define MAX_GUESS 5

int playGame(int number)
{
    printf("\nOK, I am thinking of a number. Try to guess it. \n");

    int i, currentGuess;

    for (i=0; i<MAX_GUESS; i++){

        printf("\nYour guess?: ");
        scanf("%i", &currentGuess);

        if (currentGuess > 200) {
            printf("Illegal guess. Your guess must be between 1 and 200.\n");
            printf("Try again.\n ");
        }

        else if (currentGuess > number) {
                printf("Too high!\n");
        }


        else if (currentGuess < number) {
            printf("Too low!\n");

        }

        else {
            printf("****CORRECT****\n");
            return 0;
        }
    }

    return i;
}

int main() {


    int i, number, x;

    char answer = 'n';

    time_t t;

    srand((unsigned)time(&t));

    printf("Welcome to the game of Guess It! \nI will choose a number between 1 and 200. \nYou will try to guess that number.");
    printf("If you guess wrong, I will tell you if you guessed too high or too low. \nYou have 5 tries to get the number. \n");

    do
    {
        number = rand()%200+1;
        x = playGame(number);

        if (x == MAX_GUESS)
            printf("Sorry you have entered the maximum number of tries. \n");

        printf("Want to play again? \n");

        // To flush the newline character
        getchar();
        answer = getchar();

    } while (answer != 'n' || answer != 'N');

    printf("Goodbye, it was fun. Play again soon.\n");

    return 0;
}