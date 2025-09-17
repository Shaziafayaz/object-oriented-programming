#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, amount;
//thoda confusion3

    while (1) {
        printf("\n--- Simple Banking System ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance Inquiry\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Deposit
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited: %.2f\n", amount);
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 2: // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn: %.2f\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3: // Balance Inquiry
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4: // Exit
                printf("Exiting... Thank you!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
