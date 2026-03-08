#include <stdio.h>

int main() {
    int balance;
    printf("Enter initial balance: ");
    scanf("%d", &balance);

    while (balance > 0) {
        int withdraw;
        printf("Enter withdrawal amount: ");
        scanf("%d", &withdraw);
        balance -= withdraw;
        printf("Remaining balance: %d\n", balance);
    }

    printf("Balance exhausted.\n");
    return 0;
}