#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<ctype.h> // for tolower() function
int main(){

    printf("Welcome to the Quiz Game!\n");
    
    char ques[][100] = {
        "What is the capital of France?",
        "Which planet is known as the Red Planet?",
        "Who wrote 'To Kill a Mockingbird'?"
    };
    char options[][100] = {
        {"A) Berlin\nB) Madrid\nC) Paris\nD) Rome"},
        {"A) Earth\nB) Mars\nC) Jupiter\nD) Venus"},
        {"A) Harper Lee\nB) Mark Twain\nC) J.K. Rowling\nD) Ernest Hemingway"}
    };
    char opans[] = {'C', 'B', 'A'};

    int quesSize = sizeof(ques) / sizeof(ques[0]);
    int optionsSize = sizeof(options) / sizeof(options[0]);
    int ansSize = sizeof(opans) / sizeof(opans[0]);

    int correctAns = 0;

    for (int i = 0; i < quesSize; i++)
    {
        printf("\n%s\n", ques[i]);
        printf("%s\n", options[i]);
        char userAns = '0';
        printf("Enter your answer (A/B/C/D):\n");
        // getchar();
        scanf(" %c", &userAns);
        
        userAns = toupper(userAns);  // Convert user input to uppercase

        if(userAns == opans[i]){
            printf("Congratulations! Your ans is correct!\n");
            printf("The answer is %c\n", opans[i]);
            correctAns++;
        }
        else{
            printf("You are wrong!\nThe correct answer is %c!\n", opans[i]);
        }
        Sleep(1000);
    }
    printf("\nYou got %d out of %d questions correct.\n", correctAns, quesSize);

    return 0;
}