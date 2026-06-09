#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("Welcome to the Guessing Game!\n");

    srand(time(NULL));
    char ans;
    do{
    int min = 1;
    int max = 100;
    int guess;
    int attempt = 0;
    int randomnum = (rand() % (max - min + 1)) + min;

    
        do{
            printf("Enter a number between %d and %d: ", min, max);
            scanf("%d",&guess);
            attempt++;
            if (guess < randomnum){
                printf("Higher! Try again.\n");
            }
            else if(guess > randomnum){
                printf("Lower! Try again.\n");
            }

        }while( guess != randomnum);

        printf("Congratulations! You've guessed the number %d in %d attempts.\n", randomnum, attempt);

        printf("Do you want to play again? (Y/N)\n");;
        getchar();
        scanf("%c", &ans);


    }while (ans == 'Y' || ans == 'y');
    printf("Thank you for playing!\n");
    // by md_rafsan_janee
    getchar();
    char junk;
    printf("Press any key to exit...");
    scanf("%c", &junk);
    printf("Goodbye! %c\n", junk);

    
}