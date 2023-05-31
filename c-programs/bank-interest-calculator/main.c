#include <stdio.h>
#include <stdbool.h>

const double FIXED_RATE_TIER_1 = 0.08;
const double FIXED_RATE_TIER_2 = 0.06;
const double FIXED_RATE_TIER_3 = 0.05;
const double FIXED_RATE_TIER_4 = 0.04;
const double SAVINGS_RATE_TIER_1 = 0.05;
const double SAVINGS_RATE_TIER_2 = 0.03;
const double SAVINGS_RATE_TIER_3 = 0.025;
const double SAVINGS_RATE_TIER_4 = 0.02;

int main() {
    char account_type;
    double account_balance;
    double interest_rate;
    double interest;
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

    if(account_type == 'r') {
        if (account_balance > 100000){
            interest_rate = SAVINGS_RATE_TIER_1;
        } else if (account_balance > 50000) {
            interest_rate = SAVINGS_RATE_TIER_2;
        } else if (account_balance > 10000) {
            interest_rate = SAVINGS_RATE_TIER_3;
        } else {
            interest_rate = SAVINGS_RATE_TIER_4;
        }
    } else if(account_type == 's') {
        if (account_balance > 100000) {
            interest_rate = FIXED_RATE_TIER_1;
        } else if (account_balance > 50000) {
            interest_rate = FIXED_RATE_TIER_2;
        } else if (account_balance > 10000) {
            interest_rate = FIXED_RATE_TIER_3;
        } else {
            interest_rate = FIXED_RATE_TIER_4;
        }
    } else {
        interest_rate = 0.00;
    }

    interest = account_balance * interest_rate;

    printf("Processing...\n");
    printf("Results:\n");
    printf("Account Type: %s\n", (account_type == 'r') ? "Savings" : "Fixed");
    printf("Account Balance: %.2f$\n", account_balance);
    printf("Interest Rate: %.2f%%\n", interest_rate * 100);
    printf("Calculated Interest: %.2f$\n", interest);
    printf("New Account Balance: %.2f$\n", (account_balance + interest));

    return 0;
}
