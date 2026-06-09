#include <stdio.h>
#include <string.h> 

int main()
{
    char ans;
    printf("Welcome to the Shopping Chart!\n Press Enter to continue...");

    do{
    getchar();
    printf("What would you like to buy?\n");
    
    char item[20];
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';
    
    printf("How much does one %s cost?\n", item);
    float price;
    scanf("%f", &price);
    getchar();
    printf("How many %ss would you like to buy?\n", item);
    int amount;
    
    scanf("%d", &amount);
    if (amount > 1)
    {
        printf("You have bought %d %ss\n", amount, item);
    }
    else
    {
        printf("You have bought %d %s\n", amount, item);
    }
    
    float total;
    total = price * amount;
    printf("The total is: $%.2f\n", total);

    printf("Do you want to buy anything else?\n Y or N\n");
    getchar();
    scanf("%c", &ans);
    }

    while (ans == 'Y' || ans == 'y');

    printf("Thank you for shopping with us!\n");
    // by md_rafsan_janee
    getchar();
    char junk;
    printf("Press any key to exit...");
    scanf("%c", &junk);
    printf("Goodbye! %c\n", junk);

    return 0;
}