#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int results(int user, int comp);
void compchoice(int comp);
void userchoice(int user);

char ans;
int win, lost;

int main(){
    printf("Welcome to the Rock, Paper, Scissors Game!\n");

    do
    {
    
    int user = 0;
    srand(time(NULL));
    int comp = (rand() % 3) +1;

    do{
    printf("Enter your choice\n 1 for Rock\n 2 for Paper\n 3 for Scissors\n ");
    printf("Your choice: ");
    scanf("%d", &user);
    }while(user < 1 || user > 3);


    userchoice(user);
    compchoice(comp);
    results(user, comp);
    
    printf("Do you want to play again? (Y/N)\n");;
    getchar();
    scanf("%c", &ans);

    
    }while (ans == 'Y' || ans == 'y');
    printf("Thank you for playing!\n");
    printf("Final Score:\n You won %d times\n Computer won %d times\n", win, lost);
    if (win > lost)
    {
        printf("Congratulations! You beat the computer by %d points\n", win - lost);
    }
    else if (lost > win)
    {
        printf("Computer won by %d points!\n Better luck next time!\n", lost - win);
    }
    else
    {
        printf("It's a tie with %d points each! Well played!\n", win);
    }
    
    // by md_rafsan_janee
    getchar();
    char junk;
    printf("Press any key to exit...");
    scanf("%c", &junk);
    printf("Goodbye! %c\n", junk);

    return 0;
}

int results(int user, int comp){
    if(user == comp){
        printf("It's a tie\n");
    }
    else if(user == 1 && comp == 3 || user == 2 && comp == 1 || user == 3 && comp == 2){
        win += 1;
        if(win == 1){
            printf("You won once!\n");
        }else{
            printf("You won %d times!\n", win);
            }
    }
    else{
        lost += 1;
        if(lost == 1){
            printf("Computer won once!\n");
        }else{
            printf("Computer won %d times!\n", lost);
        }
    }
    return 0;
}

void compchoice(int comp){
    switch (comp)
    {
    case 1:
        printf("Computer chose Rock\n");
        break;
    case 2:
        printf("Computer chose Paper\n");
        break;
    case 3:
        printf("Computer chose Scissors\n");
        break;
    
    default:
        printf("Invalid choice\n");
        break;
    }
}

void userchoice(int user){
    switch (user)
    {
    case 1:
        printf("You chose Rock\n");
        break;
    case 2:
        printf("You chose Paper\n");
        break;
    case 3:
        printf("You chose Scissors\n");
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
}