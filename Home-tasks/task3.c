#include <stdio.h>
void main() {
    int balance, withdraw_amount;
    printf("Enter balance: ");
    scanf("%d", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw_amount);
    if((withdraw_amount%500==0) && (withdraw_amount<=balance) && (withdraw_amount<=25000)) {
        printf("Withdrawal Successful. ");
        int rem_balance=balance-withdraw_amount;
        printf("Remaining balance: %d", rem_balance);
    } else {
        if(withdraw_amount%500!=0) {
            printf("Withdrawal denied. Reason: only amount that is a multiple of 500 is allowed to be withdrawed.");

        } else if(withdraw_amount>balance) {
             printf("Withdrawal denied. Reason: Insuffiecient balance");
        } else if(withdraw_amount>25000) {
            printf("Withdrawal denied. Reason: Daily withdrawing limit is 25000");
        }
    }
}