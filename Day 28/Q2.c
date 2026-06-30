//Program to Create Bank Account System

#include <stdio.h>

struct BankAccount {
    int accountNo;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount acc;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n----- BANK MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Current Balance = %.2f\n", acc.balance);
                break;

            case 2:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Updated Balance = %.2f\n", acc.balance);
                break;

            case 3:
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= acc.balance) {
                    acc.balance -= amount;
                    printf("Updated Balance = %.2f\n", acc.balance);
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}