#include <stdio.h>
int main() {

    printf("Welcome to the Banking App!\n");

    FILE *plogs = fopen("BankLogs.txt", "r");
    float log = 0;
    if (plogs == NULL){
        printf("Failure");
        return 1;
    }
    
    fscanf(plogs, "%f", &log);
    fclose(plogs);

    float balance = log;
    float deposit, withdraw;
    int choice;

    do {
    do {
    printf("Choose your option:\n 1. Check Balance\n 2. Deposit\n 3. Withdraw\n 4. Exit\n");
    printf("Your choice: ");
    scanf("%d", &choice);
    } while(choice < 1 || choice > 4);

    switch (choice)
    {
    case 1:
        printf("Your current balance is: $%.2f\n", balance);
        break;
    case 2:
        printf("Enter the amount to deposit:$");
        scanf("%f", &deposit);
        if (deposit <= 0) {
            printf("Invalid deposit amount! Please enter a positive value.\n");
        } else {
            balance += deposit;
            printf("Deposit successful! Your new balance is: $%.2f\n", balance);
        }
        break;
    case 3:
        printf("Enter the amount of withdrawal:$");
        scanf("%f", &withdraw);
        if(withdraw > balance){
            printf("Insufficient funds! Your current balance is: $%.2f\n", balance);
        }
        else if(withdraw <= 0){
            printf("Invalid withdrawal amount! Please enter a positive value.\n");
        }
        else{
            balance -= withdraw;
            printf("Withdrawal successful! Your new balance is: $%.2f\n", balance);
        }
        break;
    case 4:
        printf("Thank you for using our Banking App!\nGoodbye!\n");
        break;
    default:
        printf("Invalid choice!\n");
        break;
    }
    } while(choice != 4);

    FILE *pFile = fopen("BankLogs.txt", "w");

    if (pFile == NULL){
        printf("Failed to save logs");
        return 1;
    }
    fprintf(pFile, "%0.2f", balance);
    fclose(pFile);

    //by md_rafsan_janee;
    return 0;
}