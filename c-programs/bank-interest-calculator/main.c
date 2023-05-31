#include <stdio.h>
#include <stdbool.h>

int main() {
    char account_type;
    double account_balance;
    bool is_valid_input = false;

    printf("=== Welcome to Interest Calculator ===\n");

    printf("Enter the account type (Savings Account (r) , Fixed account (s)):\n");

    do{
        scanf(" %c", &account_type);
        if(account_type == 'r' || account_type == 's') {
            is_valid_input = true;
        }
        if (!is_valid_input) {
            printf("Invalid input! Please try again.\n");
        }
    } while(!is_valid_input);

    printf("Enter the account balance :\n");

    do{
        scanf(" %lf", &account_balance);
        if(account_balance > 0) {
            is_valid_input = true;
        } else {
            is_valid_input = false;
        }
        if (!is_valid_input) {
            printf("Invalid input! Please try again.\n");
        }
    } while(!is_valid_input);



    return 0;
}
