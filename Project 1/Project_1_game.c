#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    // printf("Random Number: %d\n", randomNumber);

    do{
        printf("Guess the number ");
        scanf("%d", &guessed);
        no_of_guesses++;

        if (guessed > randomNumber){
            printf("Lower number please!\n");
        }
        else if(guessed < randomNumber){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrts!!\n");
        }

    } while (guessed != randomNumber);

    printf("Your guessed the number in %d guesses ", no_of_guesses);

    return 0;
}