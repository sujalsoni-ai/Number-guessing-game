#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int secretNumber, guess;
    int attempts = 0;

    //Generate a random number between 1 and 100
    srand(time(0));
    secretNumber = rand() % 100 +1;
    printf("================================\n");
        printf("    NUMBER GUESSSING GAME    \n");
    printf("================================\n");
    printf("I have choossen the number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > secretNumber){
            printf("Too High ! Try again.\n\n");
        }
        else if(guess < secretNumber){
            printf("Too Low ! Try again.\n\n");
        }
        else{
            printf("congratulations! You guessed the number %d in %d attempts.\n", secretNumber, attempts);
        }
    
            
        } while (guess != secretNumber);

        return 0;
    
}
